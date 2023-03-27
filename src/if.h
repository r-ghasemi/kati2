#include "def.h"

int _while();
int parse(int h, int stop, int block) ;

int _if() {
	struct node n1,g1,n2,n3;
	int hsave=head, hsave2;
	//token=getToken(0);
	//if (token.type!=OP && token.u.val!='(')  error("missing (",1);

	n1.cmd=IF;	n1.link=0;	n1.start= _main.end;

	//int hb;
	while (code[head]!=0 && code[head]!='.' ) {
	//	 hb= head;
		 token=getToken(0);

		 if (token.type==KEYWORD && (token.id==K_THEN1 || token.id==K_THEN2)) 	{
			//SIGN:INFIX-POSTFIX	 
			while ( top_op() != 0 ) add_token( &_main, pop_op() );
		 	break;
		 }

		 if (token.type== KEYWORD) 	
			_error(1, "کلمه /آنگاه/ در دستور اگر لازم است.");
//		 if (token.type==ID) //convert id to number
//			token.id=check(token.u.tok);	
	
		 if (token.type==OP 
			 || (token.type==ID /*&& token.tok_ip >= 0) */)) { // infix to postfix conversion		 
		 	 //SIGN:INFIX-POSTFIX	 
		 	 if (token.u.op=='(') 
		 	 	push_op(token); // higest precedence for ( operator
		 	 else
		 	 if (token.u.op==')') { 
		 	 	while ( top_op() != '(' ) add_token( &_main, pop_op() );
		 	 	pop_op(); // skip '('
		 	 } else	 {
		 	 	while (precedence(token.u.op) <= precedence( top_op() ) ) {  			 		
			 	 	 add_token( &_main, pop_op());
			 	}			 	
			 	push_op(token);
			 }
		 } else	 add_token(&_main, token);	

	}

	if (token.id!=K_THEN1 && token.id!=K_THEN2) 
		error("کلمه انگاه مد نظر است.",1);

	add_token(&_main, create_token_op('.'));

	n1.end= _main.end;

	head++;
	hsave2=head;

	token=getToken(0);

	if (token.id==TEKRARKON || token.id==TEKRAR){
		head=hsave;
		return _while();
	}

	head=hsave2;
	while (isspace(code[head])) head++;

	add_node(&n1);
	
	int ifsyntax=1;
	if (code[head]==':') ifsyntax=2;
	
	if (code[head]=='{' || code[head]==':') { 
		//parse block
		if (parse(head+1,1, code[head])==0) 
				_error(1,"بدنه بلاک بسته نشده است.");
	} else {
		hsave=head;
		//parse next statement only
		parse(hsave,0,'{');
	}

	g1.cmd=GOTO;	g1.link=0;	g1.start=NULL;	g1.end=NULL;
	add_node(&g1);

	hsave=head;
	
	if (ifsyntax==1) token=getToken(0);
		
	if (token.type==KEYWORD && token.id==ELSE) {		
		// GOTO [n2]
		n2.cmd=NOP;	n2.link=0;	n2.start= NULL;	n2.end= NULL; n2.next=0;
		add_node(&n2);

		n1.self->cmd=IFE;

		while (isspace(code[head])) head++;

		if (ifsyntax==2) {
			if (code[head] != ':' ) _error(1,"علامت  :  بعد از وگرنه لازم است.");			
		}
		
		if (ifsyntax==2 || code[head]=='{' ) {  
			if (ifsyntax==2) code[head]='@';		
			if (parse(head+1,1, code[head] )==0) 
				_error(1,"بدنه بلاک بسته نشده است.");
		} else {
			hsave=head;
			parse(hsave, 0,'{');
		}		
	} else {
		head=hsave; //resore head {if without else}	
	}
	
	if (ifsyntax==2) {
		token=getToken(0);
		if (token.type!=OP || token.u.op!='.') {
			_error(1,"پایان اگر باید علامت . باشد.");
		}
	}
	
	n3.cmd=NOP;	n3.link=0;	n3.start= NULL;	n3.end= NULL; n3.next=0;
	add_node(&n3);
	
	n1.self->next= n3.counter;
	if (n1.self->cmd==IFE) n1.self->next=n2.counter;
	g1.self->next= n3.counter;
	return 0;
}
