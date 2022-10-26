#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define KATI_VERSION 2.0

#include "def.h"
#include "func.h" 
#include "variant.h"
#include "eval.h"
#include "if.h"
#include "while.h"


int asm_flag=1;

int scan(char *file) {
    int k=0; char c;
    FILE * fp=fopen(file,"r");
    if (!fp) {
	printf("خطای فایل ورودی.");
	return 0;
    }
    c=getc(fp);
    while (c!=EOF)    {
        code[k++]=c;
        c=getc(fp);			
    }
    code[k++]=0;
    code_size=k;
    fclose(fp);	
    return 1;
}

void add_statement(enum command cmd, struct context *c) {
	struct node n;
	int clearStack=1;
	n.cmd=cmd;

	n.link= 0;
	if (cmd==BREAK || cmd==CONTINUE) {		
		if (loop_top < 0) 
		   _error(1,"دستور توقف و ادامه بایستی در یک حلقه تکرار استفاده شوند.");

		n.link=loop_stack[loop_top];	   //for break & countinue
	}

	n.next= counter+1;
	n.start= c->end;
 
	if (cmd==PRINT || cmd==READ) {
		//add_token(c, create_token_op(EVAL));
	}	

	do {
		 token=getToken(0);		 

		 if (token.type==OP && token.u.op=='.') {
		 		//read and add stack3 items
		 		//SIGN:INFIX-POSTFIX	 
		 	 	if (clearStack) while ( top_op() != 0 ) {
			 	 	add_token( c, pop_op() );
		 	 	}		 		
		 		break;
		 }
		 
		// if (token.type== KEYWORD) 
		// 	_error(1,"اینجا کلمه کلیدی مجاز نمی‌باشد.");

		/* && token.id!= DAR && 
			token.id!=BA && token.id!=BAR &&
			token.id!=AZ && token.id!=TA
		 )  */
		 if (token.type==ID && (token.id==RA)) {
		 	//read and add stack3 items
		 	//SIGN:INFIX-POSTFIX	 
		 	while ( top_op() != 0 ) add_token( c, pop_op() );
		 	
		 	add_token(c, token);
		 	clearStack=0;	 
		    continue;
		 }
		 		 
		/* if (token.type==ID && (token.id==VA)) {
		 	//read and add stack3 items		
		 	//SIGN:INFIX-POSTFIX	  	
		 	while ( top_op() != 0 ) {
			  	add_token( c, pop_op() );
		 	}	
//		 	add_token(c, token);
		    continue;
		 }	*/	 		 
		 
		 if (token.type==ID && (token.id==BAR)) {
		    continue;
		 }

		 if (cmd==LET && token.type==OP && token.u.op==FARMAN ) {
	   	    add_token(c, token);
		    token = getToken(0);
		    if (token.type!=STRING) 
		    	_error(1,"اینجا یک رشته برای نام تابع  لازم است.");
		    
		    int ex_func=check_external((char * )token.u.val.start);		    
		    if (ex_func<0) {
		    	sprintf(msg, "فرمان خارجی [%s] تعریف نشده است",  token.u.val.start);
		    	_error(1, msg);
		    }
		    
 		   add_token(c, create_token_dig(ex_func));
		   continue;
		 } 
		 
		 //SIGN:INFIX-POSTFIX	 
		 if (clearStack && (token.type==OP 
		 		|| (token.type==ID && token.tok_ip>=0) )) { // infix to postfix conversion		 
		 	 if (token.u.op=='(') 
		 	 	push_op(token); // higest precedence for ( operator
		 	 else if (token.u.op==')') { 
		 	 	while ( top_op() != '(' ) {
			 	 	add_token( c, pop_op() );
		 	 	}
		 	 	pop_op(); // skip '('
		 	 } else	 {
		 	 	while (precedence(token.u.op) <= precedence( top_op() ) ) { 
			 	 	 add_token( c, pop_op());
			 	 }
			 	
			 	push_op(token);
			 }
		 } else	 add_token(c, token);		 

	} while (token.type!=EOS && token.u.op!='.');

	if (token.type==EOS) error("پایان دستور بایستی با علامت نقطه باشد",1);

	if (cmd==PRINT) {
		n.cmd=LET;
		add_token(c, create_token_id(check("را")));
		add_token(c, create_token_id(check("بنویس")));
	} else 
	if (cmd==READ) {
		n.cmd=LET;
		add_token(c, create_token_id(check("را")));
		add_token(c, create_token_id(check("بخوان")));
	};

	add_token(c, create_token_op('.'));//sprintf(code+compiler_code, " .");

	n.end= c->end;

	add_node(&n);
}

int parse(int h, int stop) {
	struct node n;
	
	int saveHead;
	head=h;

	while(code[head] && isspace(code[head])) {
		if (code[head]==10) line++;
		head++;
	}

	if (debug==1) {
		int i;
		printf("\n\n\n\n[خط=%d]: ", line);
		for (i=head; code[i] && code[i]!=10; i++) 
			fputc( code[i], stdout);
		printf("\n\nnPress [ENTER]\n");
		getchar();
	}
 
	do {	
	  int l;

	   // if (head==stop) return 0;	
	
	    saveHead=head;
	    token=getToken(0);
	 	    
	    if (token.type==EOS) return 0;
	    if (token.type==OP && token.u.op=='}') 	return 1;	  

	
	   //  if (token.type!=KEYWORD && (token.type==OP && token.u.op!=EVAL)) 		
	    //        error("اینجا یک دستور لازم است.",1);  

		if (debug==2) {
			printf("\n\n******* Command");
			log_(token);
		}

	
		if (token.type==OP &&  token.u.op==EVAL  ) {
			if (debug==2) printf("\n---------EVAL");
			//head=saveHead;
			add_statement(LET, &_main);
			continue;
		}
		 
		if (token.type==KEYWORD && token.id == K_BEGIN) {
			if (debug==2) printf("\n---------K_BEGIN");
			add_statement(NOP, &_main);		
			continue;
		}
		
		if (token.type==KEYWORD && token.id == K_CONTINUE) {
			if (debug==2) printf("\n---------K_CONTINUE");
			add_statement(CONTINUE, &_main);		
			continue;
		} 
		
		if (token.type==KEYWORD && token.id == K_BREAK) {
			if (debug==2) printf("\n---------K_BREAK");
			add_statement(BREAK, &_main);		
			continue;
		} 
		
		if (token.type==KEYWORD && token.id == K_END) {
			if (debug==2) printf("\n---------K_END");
			add_statement(END, &_main);		
			continue;
		}
		
		if (token.type==KEYWORD && token.id == K_RET) {
			if (debug==2) printf("\n---------K_RET");
			add_statement(RET, &_main);		
			continue;
		}
		
		if (token.type==KEYWORD && token.id == HAS) {
			if (debug==2) printf("\n---------HAS");
			add_statement(CHAS, &_main);
			continue;
		}

	
	//	if (token.type==KEYWORD && !strcmp(token.u.tok,"بروبه")) {
		    //todo: goto
		 /* n.cmd=GOTO;
	 	  n.link=0;
		  n.start= head;

		  token=getToken(0);  // label
		  if (token.type!=DIGIT) error("label required",1);
		  int l=(int) *(token.u.val.value.ld);

		  token=getToken(0); //'.'
		  if (token.type!=OP && token.u.op!='.')  error("missing .",1);
		  
		  n.end= head-1;
		  n.next= labels[l];
		  
		  add_node(&n);*/
	//	  continue;
	//	}
		
	//	if (token.type==KEYWORD && !strcmp(token.u.tok,"علامت")) {
		    //goto: label
		/*	token=getToken(0);
			// TODO: must be number
	        l=(int) *(token.u.val.value.ld);
	        
	        token=getToken(0);
	        if (token.type!=OP) error("missing label seperator (:)",1);
	        if (token.u.op!=':') error("missing label seperator (:)",1);
	        
	        //save label loation
			n.cmd=NOP; n.link=0;	  n.start= head; n.end= head;
			n.next= counter+1;
	        labels[l]= counter;		
			add_node(&n);*/
	//		continue;
	//	} 
		
		if (token.type==KEYWORD && token.id==K_NEWLINE) {
			if (debug==2) printf("\n---------K_NEWLINE");
			add_statement(NEWLINE, &_main);		
			continue;
		}
		
        if (token.type==KEYWORD && token.id == K_FUNC) {
			if (debug==2) printf("\n---------K_FUNC");
			_func();
			continue;
		}		
		
        if (token.type==KEYWORD && token.id == K_CALL) {
			if (debug==2) printf("\n---------K_FUNC");
			_call();
			continue;
		}		
		
		if (token.type==KEYWORD && token.id == K_IF) {
			if (debug==2) printf("\n---------K_IF");
			_if();
			continue;
		}
		
		if (token.type==KEYWORD && token.id == K_TEDAD) {
			if (debug==2) printf("\n---------K_TEDAD");
			_while2();
			continue;
		}
		
		if (token.type==KEYWORD && token.id == AZ ) {
			if (debug==2) printf("\n---------AZ");
			_while3();
			continue;
		}
									  
		if (token.type==ID && token.id == BENVIS) {
			if (debug==2) printf("\n---------BENVIS");
			add_statement(PRINT, &_main);
			continue;
		}

		if (token.type==ID && token.id == BEKHAN) {
			if (debug==2) printf("\n---------BEKHAN");
			add_statement(READ, &_main);
			continue;
		}		 
		//عبارت محاسباتی
		/*
		اگر بعد از عبارت محاسباتی عملگر مساوی/=/ بود انتساب است. /انجام/
		اگر بعد از عبارت محاسباتی کلمه /بار/ بود حلقه تکرار است. /ددد/
		*/
			/*token.u.op== EVAL*/		
		 
		// this is ID token		
		
		//head=saveHead;
		//if (debug==2) printf("\n---------EVAL");
		///add_token(&_main, create_token_op(EVAL));
		//add_statement(LET, &_main);
		
	    // todo: check for function name here
		sprintf(msg,"دستور [%s, id=%d] ناشناخته است.", token.u.tok, token.id);
		error(msg, 1);		
	} while (stop); 
	return 2;
}

void display () {
	int i,j;
	struct token * t;


	for (i=0; i < counter; i++) {
		printf("\n%2d: [%-6s]:[ %3d ]: ",i, commandStr[nodes[i].cmd], 
		nodes[i].next);

		t=nodes[i].start;
		do {	
			if (t==nodes[i].end) break;
			t=t->next;	

			if (!t) break;
			if (t->type==ID) {
				if (asm_flag==0)  printf(" %s ", vars[t->id].name);
						else printf(" [%d,IP=%d(#%d)] ", t->id,  t->tok_ip, t->tok_ix);
						//printf(" %s[%d,IP=%d] ", vars[t->id], t->id, values[t->id]->IP);
			}
			else if (t->type==DIGIT)
				printf(" %Lf ", LDVALUE(t->u.val));
			else if (t->type==OP)
				printf(" %c ", t->u.op);
			else if (t->type==STRING)
				printf(" |%s| ", STVALUE(t->u.val));
			
		} while (t);

	}
		printf("\n");
/*
	printf("\n\nLABELS:");
	for(i=0;i<10;i++) {
		printf("\nl=%d, counter=%d", i, labels[i]);
	}*/
}


int ife(int bp) {
	long double  val1;

	val1=eval(bp);

	if ((int)(val1)==0) return -1;
	return 0;
	//_ip=nodes[_ip].next-1;
}

void has() {
}

void break_() {
}

void continue_() {
}

void run(int ip, int bp) {
    // todo: prepare() function for run
    int savedIP=0;
	do {	 
	  if (debug) {
	  	 //printf("\nIP=%d\n", ip); fflush(stdout);
	  }
	  switch (nodes[ip].cmd) {
		case GOTO: 
			ip=nodes[ip].next-1; 
		break;

		case NEWLINE: 
			putc('\n', stdout);
		break;

		case CHAS:  
			has();
		break;

		case END:  
			exit(0) ;
			break;

		case LET:   
		    eval(bp);	
		break;

        case FUNC:
            ip=nodes[ip].next-1;            
        break;
        
        case CALL:
            savedIP=ip;
            // todo: use eval() function to call function
            // todone: (can use eval function stack) create a variable scope based on function arguments count
            // todone: function local variables : move to eval()
            // todone: global variables  : move to eval()
            // todo: function access to global variables  
            // todone: add parameters to variale stack and call function  : move to eval()
            // todone: call function from statement (EVAL) with parameters  : move to eval()
            // todo: check jump is valied >=0 not -1 in call function
            ip= nodes[ip].next;
        break;
        
        case RET:
            // todo: dispose variable scope  first var is return value or result
            // todo: return value
            // todo: restore variable stack and return to caller
//            ip=savedIP;
		//printf("\nthis is RET\n");
            return ;
        break;
        
		case BREAK:  
			//exit current loop
			ip= nodes[ nodes[ip].link ].link;
		break;

		case CONTINUE:  
			// goto the incremment line of repeat
			// or first statement of while
			// TODO: what about do-while ?
			ip= nodes[ nodes[ nodes[ip].link ].link ].link-1;
		break;

		case WHILE:
		case WHILEE:
		case IF:
		case IFE: {
			int xy=ife(bp);
			if (xy!=0) ip=nodes[ip].next + xy;
			if (debug==2) printf("\nIP=%d", ip);
		}
		break;	
	  }
	  ip++;
	  _ip=ip;
	} while (ip < counter);
}

void print_tokens() {
 printf("\n------------\n");
  token=getToken(0);
  while (code[head]) {
	 log_(token);
      token=getToken(0);
  }
}

void  check_kati_keywords() {
//	printf("\nreset vars, varc=%d inFunction=%d", var_counter, inFunction);
 	fvar_counter=0; // reset fvar_counter
    //system variables
	/* 0*/check(".");	 	
	/* 1*/check("از");	 
	/* 2*/check("در");
	/* 3*/check("را");
	/* 4*/check("و");
	/* 5*/check("با");
	/* 6*/check("تا");
	/* 7*/check("ذخیره");
	/* 8*/check("کن");
	/* 9*/check("تکرار");
	/*10*/check("تکرارکن");
	/*11*/check("افزایش");
	/*12*/check("کاهش");
	/*13*/check("بده");
	/*14*/check("بر");
	/*15*/check("بخوان");
	/*16*/check("بنویس");
	/*17*/check("ورودی");
	/*18*/check("خروجی");
	/*19*/check("زمان");

	/*20*/check("شروع");
	/*21*/check("پایان");
	/*22*/check("اگر");
	/*23*/check("سرخط");
	/*24*/check("تعداد");

	/*25*/check("آنگاه");
	/*26*/check("انگاه");

	/*27*/check("وگرنه");
	/*28*/check("بار");
	/*29*/check("دارد");
	/*30*/check("مرتبه");

	/*31*/check("نامنفی");
	/*32*/check("مضاعف");

	/*33*/check("ادامه");
	/*34*/check("توقف");
	
	/*35*/check("تابع");
	/*36*/check("بازگشت");
	/*37*/check("فراخوان");
	/*38*/check("فرمان");
	/*39*/check("ریشه");	
	/*40*/check("توان");
	/*41*/check("هم");
	/*42*/check("یا");				
}
void init() {
	//initialize heap_pointer
    heap_pointer = heap;
	
    check_kati_keywords();
    
    // initialize timer value
	init_var(values[ZAMAN], LDOUBLE, 0);
	set_var_ld(values[ZAMAN], 0.0);

	init_context( &_main );
}

int main(int ac, char **av) {
   if (ac<2) {
	printf("\nkati  : persian programming language version 2.0 build [%s %s]", __DATE__, __TIME__);
	printf("\nusage : kati file_to_run [options]\n\n \
	options:\n \
		\n\ta 	:generarte assembly  \
		\n\td?	:debug ?=1,2,3\
		\n\n");
	exit(1);
   }

   if (ac>2) {
	 if (strchr(av[2],'d')) {
		debug=1;     
		//printf("--%c",av[2][1]);
		if (av[2][1]) debug=av[2][1]-48;
	 }
	 if (strchr(av[2],'a')) {
	   asmm=1;
	   if (av[2][1]) asm_flag=av[2][1]-48;
	 }
   }

   init();

   if  ( scan(av[1]) ==0 ) {
  	  printf("Scanner error");
	  return 0;
   }
  // data();

   if (ac>2) {
	if (!strcmp(av[2],"t")) {
		print_tokens();
		return 0;
	}
   }

   head=0;
   int ret;
   while ( (ret=parse(head, 0)) ) {
	if (ret==1) {
		_error(1,"علامت ناخواسته انتهای بلاک.");
	}
  };

   if (asmm)   display();

   if (!(debug+asmm) || debug>=2) {
    	run(0, -1);
    	fflush(stdout);
   }

   if (debug==3) 
		printf("\nHeap pointer= [%d from %d]\n", 
					heap_pointer-heap, MAX_HEAP_SIZE);
   return 0;
}
