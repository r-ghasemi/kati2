//#include "def.h"

int  parse(int h, int stop) ;
void check_kati_keywords();
/*
* functions  IP >=0 
* local vars in function: IP=-1 and IX>0
* global vars: IP=-1 and IX<0  and ID> MAXKEYS
*/
//todone: define each variable in stack  arguments and local variables
//todone: call function and access to local variable

int _func() {
	struct node n1,g1,n2;
    struct token * arg0=NULL;
    struct token * arg1=NULL;

	//token=getToken(0);
	n1.cmd=FUNC;	n1.link=0;	n1.start= _main.end;

//	int hb;
	
    token=getToken(0);
	// first token is function name	
	if (token.type!=ID) {
	    _error(1,"نام تابع را مشخص کنید");
	}
	// todo: cannot use نتیجه as function name
	
    add_node(&n1);
    
    if (inFunction) 
        _error(1, "تابع درون تابع نمی‌توان تعریف کرد.");

    //todone:<span style='color:red'>continue from here</span>: apply function address
    //for id's inside function
    int ip1 = - 1;
    int func_id=token.id;
    
    if (values[func_id]->IP >= 0) { 
    	// function prototype is defined before.
    	//todo: check for arguments count, of two definition
    	ip1 = values[token.id]->IP;
    	nodes[ip1+1].cmd=GOTO;
    	nodes[ip1+1].next = n1.counter+1;    	
    } else 
      values[token.id]->IP = n1.counter;
        
	inFunction=1;
	check_kati_keywords();
	//<b>todone:</b> function result var name=نتیجه
	//arg=add_token(&_main, token);

	token=getToken(0);
	
	if (token.type!=OP || token.u.op!='(') {
		_error(1,"علامت پرانتز بعد از نام تابع الزامی است.");
	}
	
	
//	printf("fvar=%d", fvar_counter);
	while (code[head]!=0 ) {
//		hb= head;
		token=getToken(0);
		 
	    if (token.type==OP && 
	    	(token.u.op==')' || token.u.op== '{' || token.u.op== '.')) 
	    	break;
	    	
	    if (token.type==OP && token.u.op==COMMA) continue;
        // todone: do not add AZ VA TA BA BAR
	     if (  token.id!=BAR &&				
				token.id!=AZ &&
				token.id!=BA &&
				token.id!=DAR &&
				token.id!=TA  
		 )  {
		 	add_token(&_main, token);		
		 }
	}
	
	if (token.u.op!=')') {
		_error(1,"علامت پرانتز بسته در تعریف تابع الزامی است");
	}

	token=getToken(0); 

	int idd=check("نتیجه");
	arg0=add_token(&_main, create_token_id( idd ) );


	int count=fvar_counter - MAXKEYS -1;
	n1.self->arg_count = count;
	int k=0;
	arg1=arg0;
	while (arg1) {
	    arg1->tok_ix= k;//count;
	    fvars[arg1->id].ix=k;//count;
	    arg1=arg1->next;
	    k++;//count--;
	}
	add_token(&_main, create_token_op('.'));
	n1.self->end= _main.end;
	
    n2.cmd=NOP;	n2.link=0;	n2.start= NULL; n2.end=NULL;
    add_node(&n2);
    
	if (token.type==OP && token.u.op== '{') { 
		//parse block
		if (parse(head,1)==0) 
				_error(1,"بدنه تابع بسته نشده است.");
	} else {
	    if (token.u.op != '.')
            _error(1,"بدنه تابع شروع نشده است");
        else { 
        	// this is function prototype, MARK first argument
        	if (ip1 >=0) {        		
        		if (nodes[ip1].start->next->tok_ip == -2) {
        		// previously declared this function
        		_error(1,"الگوی این تابع قبلا تعریف شده است");
        		}
        	}
			arg0->tok_ip=-2;
        }
	}
//todone: count of function arguments and variables = fvar_counter - MAXKEYS-1 in here
    n1.self->var_count= fvar_counter - MAXKEYS -1  ;
    
   // if (asmm) 
     //   printf("\nargs=%d , vars=%d", n1.self->arg_count, n1.self->var_count);

	g1.cmd=RET;	g1.link=0;	g1.start=NULL;	g1.end=NULL;
	add_node(&g1);

    inFunction=0;
	
	n1.self->next= g1.counter+1;
	n2.self->next= n2.counter+1;
    g1.self->next= n1.counter;
    return 0;
}


int _call() {
	struct node n1;
	//token=getToken(0);
	n1.cmd=CALL;	n1.link=0;	n1.start= _main.end;

//	int hb;
	struct token funcName;
	
    token=getToken(0);
	// first token is function name	
	if (token.type!=ID) {
	    _error(1,"نام تابع را مشخص کنید");
	}
	
	funcName=  token;

	while (code[head]!=0 ) {
//		 hb= head;
		 token=getToken(0);
		 
		 if (token.type==OP && token.u.op== '.')  break;

		 add_token(&_main, token);		
	}
	add_token(&_main, create_token_op('.'));
	
	n1.end= _main.end;
    add_node(&n1);
    
	n1.self->next= values[funcName.id]->IP;
	if (n1.self->next < 0) {
        sprintf(msg, "\n%s is not a function.", funcName.u.tok);
	    _error(1, msg);
	}
    return 0;    
}


