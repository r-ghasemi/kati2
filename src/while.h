#include "def.h"

int _while() {
	struct node n1,g1,n2,f1,g2,n3,n4;

	n1.cmd=WHILE;	n1.link=0;	n1.start=_main.end;

	int hb;
	while (code[head]!=0 && code[head]!='.') {
		hb=head;
		token=getToken(0);
		 if (token.type==KEYWORD && (token.id==K_THEN1 ||
						token.id==K_THEN2)) {
				while ( top_op() != 0 ) add_token( &_main, pop_op() );
				break;
		}

		if (token.type== KEYWORD) 	
			_error(1, "کلمه /آنگاه/ در دستور تکرار لازم است.");
		
//		if (token.type==ID) //convert id to number
//			token.id=check(token.u.tok);

		if (token.type==OP 
				|| (token.type==ID && token.tok_ip>=0) ) { // infix to postfix conversion		 
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
	token=getToken(0); //تکرارکن

	if (token.id==TEKRAR) {
		hb=head;
		token=getToken(0); //کن یا ...

		if (token.type==OP && token.u.op=='{') {
			error("کلمه تکرار کن فراموش شده است.",1);
		}
	}

	add_node(&n1);

	while (isspace(code[head])) head++;

	n2.cmd=NOP, n2.link=0, n2.start=0, n2.end=0, n2.next=0;
	add_node(&n2);

	loop_top++;
	loop_stack[loop_top]=n1.counter;

	if (code[head]=='{') {  // body of while	
		//TODOS: find closing brace position and parse
		if (parse(head+1,1)==0) 
			_error(1,"بدنه بلاک بسته نشده است.");
	} else {
		parse(head,0);
	}
	loop_top--;

	f1.cmd=IF, f1.link=0, f1.start=n1.start, f1.end=n1.end,
	f1.next=n2.counter;
	add_node(&f1);

	g2.cmd=GOTO, g2.link=0, g2.start=0, g2.end=0, g2.next=-1;
	add_node(&g2);
	

	n3.cmd=NOP, n3.link=0, n3.start=0, n3.end=0, n3.next=0;
	add_node(&n3);

	int hsave=head;
	token=getToken(0);	

  	if (token.type==ID && token.id==ELSE) {
	    n1.self->cmd=WHILEE;
	    while (isspace(code[head])) head++;
	    if (code[head]=='{') {
			//parse block of code until closing brace
			if (parse(head+1,1)==0) 
				_error(1,"بدنه بلاک بسته نشده است.");

	     } else {
			//parse only next statement
			parse(head, 0);
	     }
	 } else head=hsave; //resore head {if without else}	

	n4.cmd=NOP, n4.link=0, n4.start=NULL, n4.end=NULL, n4.next=0;		
	add_node(&n4);

	// configure while structure
	n1.self->next=n3.counter;
	//g1.self->next=n3.counter;	
	f1.self->next=n4.counter;
	g2.self->next=n2.counter; 

	n1.self->link=n4.counter;	//for break
	n4.self->link= n1.counter;	// for continue
	return 0; 
}

int _while2() {	
	struct node s1,s2,n1,g2,n2,f1,n3;
	struct token *vv;
	int save1;
	//printf("\n---while---");

	char var[20];

	char temp[200];
	sprintf(var,"rep%d",rep+1);
	int varid= check(var);
//printf("\n------%s = %d", var, varid);
	n1.cmd=WHILE;	n1.link=0;	save1= head;
	n1.start= _main.end;

	int hb;
	while (code[head]!=0 ) {
		hb=head;
		token=getToken(0);

		if (token.type==ID && (token.id==TIMES || token.id==MARTABEH) ) {
			//SIGN:INFIX-POSTFIX	 
			while ( top_op() != 0 ) add_token( &_main, pop_op() );
			break;
		}
		if (token.type==OP && token.u	.op=='.') break;

		if (token.type== KEYWORD) 	
				_error(1,"کلمه /بار/ یا /مرتبه/ در دستور تکرار الزامی است. ولی اینجا یک کلمه کلیدی آورده شده است.");

		if (token.type==OP 
				|| (token.type==ID && token.tok_ip>=0) ) { // infix to postfix conversion		 
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

	vv=add_token(&_main, create_token_id(0));
	add_token(&_main, create_token_op(GTE));
//	compiler_code+= sprintf(code+compiler_code, " . ");
	add_token( &_main, create_token_op('.'));

	if (token.type!=ID || (token.id!=TIMES && token.id!=MARTABEH)) 
		_error(1, "کلمه /بار/ یا /مرتبه/ در دستور تکرار الزامی است.");

	head++;
	token=getToken(0); //تکرارکن

	if (token.id == TEKRAR ) {
		hb=head;
		token=getToken(0); //کن یا ...
//		printf("---%s", token.u.tok);
		if (token.type==OP && token.u.op=='{') head=hb;		
	} 

	rep++;
	scope++;
	
	hb=head;
	token=getToken(0); // counter name for loop

      if (token.type==OP && token.u.op==FMT) {  //  : after repeat
		token=getToken(0);
		if (token.type!=ID) _error(1,"نیاز به یک نام شمارنده است.");
		//define custom variable
		varid= vv->id= token.id;
      } else {
		head=hb;
		// define شمارنده variable
		vv->id= varid;// check(var);
	}

	n1.end= _main.end;


	s1.cmd=LET;	s1.start=_main.end; s1.link=0; s1.next=counter+1;

//	add_token(&_main, create_token_op(EVAL));
	add_token(&_main, create_token_dig(1));
	add_token(&_main, create_token_op('='));
		
	struct token tk=create_token_id(varid);
	vv->tok_ix= tk.tok_ix; // local var
	add_token(&_main, tk);
	add_token( &_main, create_token_op('.'));
		
	s1.end= _main.end;

	n2.cmd=NOP, n2.link=0, n2.start=NULL, n2.end=NULL, n2.next=0;

	add_node(&s1);
	add_node(&n1);
	add_node(&n2);


	while (isspace(code[head])) head++;

	loop_top++;
	loop_stack[loop_top]=n1.counter;

	if (code[head]=='{') {  
		// body of while								
		//parse block of code until closing brace
		if (parse(head+1,1)==0) 
			_error(1,"بدنه بلاک بسته نشده است.");

	} else {
		//parse next statement only
		parse(head, 0); 
	}
	loop_top--;

	s2.cmd=LET, s2.link=0, s2.start=_main.end, s2.next=counter+1;	

//	add_token(&_main, create_token_op(EVAL));
/*	add_token(&_main, create_token_op(ADD));
	add_token(&_main, create_token_id(varid));
	add_token(&_main, create_token_dig(1));
	add_token(&_main, create_token_op('='));
	add_token(&_main, create_token_id(varid));*/

//	add_token(&_main, create_token_op(INCR));
	add_token(&_main, create_token_dig(1));	
	add_token(&_main, tk);	
	add_token(&_main, create_token_op(ADD));			
	add_token(&_main, create_token_op('='));		
	add_token(&_main, tk);
	add_token( &_main, create_token_op('.'));
//	add_token(&_main, create_token_op('='));
//	add_token(&_main, create_token_id(varid));

	s2.end= _main.end;
	add_node(&s2);

	g2.cmd=GOTO, g2.link=0, g2.start=NULL, g2.end=NULL, g2.next=-1;

	n3.cmd=NOP, n3.link=0, n3.start=NULL, n3.end=NULL, n3.next=0;


	add_node(&g2);
	add_node(&n3);

	// configuring while structure
	n1.self->next=n3.counter;
	g2.self->next=n1.counter; 

	n1.self->link=n3.counter;  // needed for [break] statement
	n3.self->link=s2.counter;  // nedded for [continue] statement

	scope--;

	return 0; 
}

//TODONE: casscading loop problem
