#ifndef __EVAL_H
#define __EVAL_H

#include "external.h"

#define STACKSIZE	50000

struct 	token 	*stack[STACKSIZE];
int 		top=-1;

int 	    top2=-1;
stack_item  stack2[STACKSIZE];
float	    _format[STACKSIZE]={0.0};

void print_item(stack_item si, int format) {
	char fmt[20];
	if (si.dt==LDOUBLE) {
		sprintf(fmt, FORMAT, _format[format]);
		printf(fmt, si.u.ld );
	} else //TEXT
		print_string(si.u.st);
}

void push(struct token *tok) {
  if (top==STACKSIZE) runtime(1, "stack overflow(1)");
  top++;
  stack[top]=tok;
}

struct token *pop() {
  if (top==-1) runtime(1,"خطای محاسباتی");
  struct token *temp=stack[top];
  top--;
  return temp;
}


void push2_item(stack_item item) {
  if (top2==STACKSIZE) runtime(1,"stack overflow(2)");  
  
  top2++;
  stack2[top2] = item;
}

void push2_vp(datatypes dt, void *value) {
  if (top2==STACKSIZE) runtime(1,"stack overflow(2)");  
  
  top2++;
  stack2[top2].dt   = dt;

  switch (dt) {
	case INT:  stack2[top2].u.i= *((int *) value); break;
	case LDOUBLE:  stack2[top2].u.ld= *((long double *) value); break;
	case TEXT:  stack2[top2].u.st= ((char *) value); break;	
  }
  
}

void push2_i(int value) {
  if (top2==STACKSIZE) runtime(1,"stack overflow(2)");  
  
  top2++;
  stack2[top2].u.ld = value;
  stack2[top2].dt   = INT;
}

void push2_ld(long double value) {
  if (top2==STACKSIZE) runtime(1,"stack overflow(2)");  
  
  top2++;
  stack2[top2].u.ld = value;
  stack2[top2].dt   = LDOUBLE;
}

void push2_st(char * value) {
  if (top2==STACKSIZE) runtime(1,"stack overflow(2)");  
  
  top2++;
  stack2[top2].u.st = value;
  stack2[top2].dt   = TEXT;
}

stack_item * pop2() {
  if (top2==-1) runtime(1,"stack empty");
  stack_item *temp;
  temp= stack2+top2;
  top2--;
  return temp;
}


variant * getVarLocal(int  ix ) {
	variant * v;
}

long double  eval(int _BP) {
//	head=nodes[_ip].start;
	struct token * token= nodes[_ip].start;
	struct token * last_token;
	_flag=0;
	int  _top2=top2+1,  _top=top+1;

//	printf("\n eval, varc=%d inFunction=%d", var_counter, inFunction);
	if (debug==4) printf("\n++++++++ TOP2=%d\n", top2);
	if (debug==2) {
		printf("\nEVAL: [ip=%d]\n\n", _ip);
		struct token * t;
			t=nodes[_ip].start;
			do {	
				if (t==nodes[_ip].end) break;
				t=t->next;	
				if (!t) break;
				if (t->type==ID) {
				//printf(" %s=[%0.4Lf] ", vars[t->id].name, LDVALUEP((values[t->id])));
				}
				else if (t->type==DIGIT)
				;//	printf(" %Lf ", LDVALUE(t->u.val));
				else if (t->type==OP)
				;//	printf(" %c[%d] ", t->u.op, t->u.op);
				else if (t->type==STRING)
				;//	printf(" |%s| ", STVALUE(t->u.val));
			
			} while (t);
		
		printf("\n[ENTER...]");
		getchar();
	}

	while (1) {
	    //printf("\n%s\n",code+head);
	    token=token->next;	
	    if (token->type==OP) {
			if (token->u.op=='=' || token->u.op=='.') { 
			//assignment or end of statement
				break;
			}
			if (token->u.op==INCR) {
				token=token->next; //only variable to inc 	
				//todo: INCR is not for functions or constants
				long double temp;
				if (token->tok_ix > 0) {
					temp= ++(stack2[_BP+token->tok_ix].u.ld);
				} else {
					temp= ++(*(long double *)(values[token->id]->start));
				}
				//top2=_top2-1;
				//top=_top-1;
				return  temp;
			} else
			if (token->u.op==DECR) {
				token=token->next; //only variable to inc 	
				//todo: INCR is not for functions or constants
				long double temp;
				if (token->tok_ix > 0) {
					temp= --(stack2[_BP+token->tok_ix].u.ld);
				} else {
					temp= --(*(long double *)(values[token->id]->start));
				}
				//top2=_top2-1;
				//top=_top-1;
				return  temp;
			} 

			push(token);
	    }
	    else if (token->type==DIGIT) {
		//printf("\n digit=[%FRMT]",*(token->u.val.value.ld));
		 push(token);
	    }
	    else if (token->type==ID) { 
			//دستور ورودی یا خروجی با حرف اضافه /را/ مشخص می‌شود.
			if (token->id==RA) break;
			if (  token->id!=BAR &&
				token->id!=VA &&
				token->id!=AZ &&
				token->id!=BA &&
				token->id!=DAR &&
				token->id!=TA  
			)  {	
				//printf("\nvar=[%s] \n", token->u.tok);
				push(token);
			}
	    } 
	    else if (token->type==STRING) {
			push(token);
	    } else 
		runtime(1,"عبارت محاسباتی شامل  شناسه غیر مجاز است.");
      }
	

	stack_item *v1,*v2;
	long double  result;
				
	int saved_top= top;
	int input_command=1;
//	negation in compairsion operators and fix division
	int neg=0, fix=0;
	
       
//	printf("\n eval, varc=%d inFunction=%d", var_counter, inFunction);        
	while (top >= _top ) {	
		if (stack[top]->type==OP) {
			if (stack[top]->u.op!=EVAL) input_command=0; 
			//دستور ورودی نباید حاوی عملگر باشد.
			
			switch( stack[top]->u.op ) {
				/*case INCR:	
					v1=pop2();
					result= v1->u.ld +1.0L;				
					push2_vp(LDOUBLE,(void *)&result);
					break;
				case DECR:	
					v1=pop2();					
					result= v1->u.ld -1.0L;
					push2_vp(LDOUBLE,(void *)&result);
					break;*/
				case '@':	
					v1=pop2();					
					result= v1->u.ld / 2;
					push2_vp(LDOUBLE,(void *)&result);
				break;
				case DIV3:
					v1=pop2();
					
					result= v1->u.ld / 3;
					push2_vp(LDOUBLE,(void *)&result);	
				break;
				case DIV4:
					v1=pop2();
					
					result= v1->u.ld / 4;
					push2_vp(LDOUBLE,(void *)&result);
				break;
				case DIV5:
					v1=pop2();
					
					result= v1->u.ld / 5;
					push2_vp(LDOUBLE,(void *)&result);	
				break;
				case DIVN:
					v1=pop2();
					
					if (v1->u.ld != 0.0 )  
						result = 1.0 / (v1->u.ld); 
					else runtime(1,"سعی در تقسیم بر صفر.");
					push2_vp(LDOUBLE,(void *)&result);	
					// 	
				break;
				case MIRROR:
					v1 =pop2();
					
					result =  - v1->u.ld;
					push2_vp(LDOUBLE,(void *)&result);
					 //		
				break;
				
				case SQR2:  // x^2
					v1 =pop2();
				
					result=(v1->u.ld * v1->u.ld);
					
					push2_vp(LDOUBLE,(void *)&result); 
					 //	
				break;
				
				case SQR3:  // x^3
					v1 =pop2();
				
					result=(v1->u.ld * v1->u.ld * v1->u.ld);
					
					push2_vp(LDOUBLE,(void *)&result); 
					 //	
				break;				
				
				case SQRT:
					v1 =pop2();
				
					if (v1->u.ld >= 0.0) 
						result=sqrt(v1->u.ld);	
					else runtime(1,"مقدار منفی برای جذر");
					push2_vp(LDOUBLE,(void *)&result); 
					 //	
				break;
				case ADD:
					v1=pop2();				
					v2=pop2();
					
					result= v1->u.ld + v2->u.ld;
					push2_vp(LDOUBLE,(void *)&result);
				break;

				case MULT:
					v1=pop2();
					v2=pop2();
					
					result= v1->u.ld * v2->u.ld;
					push2_vp(LDOUBLE,(void *)&result);	
				break;
				case SUB:
					v1=pop2();
					v2=pop2();
					
					result= v2->u.ld - v1->u.ld;
					push2_vp(LDOUBLE,(void *)&result);					 	
				break;
				case DIV:					
					
					v1=pop2();
					v2=pop2();
		
					if (fix) {
					if (debug==4) printf("\n\nFIXX");
						if ((long long int) v2->u.ld!=0) 
 					          result=(long long int)v1->u.ld /
							(long long int)v2->u.ld;
						else runtime(1,"خطای تقسیم بر صفر در تقسیم صحیح.");
						fix=0;
					} else {			
						if (v2->u.ld != 0.0) 
							result= 
								v1->u.ld / v2->u.ld;
						else runtime(1,"خطای تقسیم بر صفر.");
					}
					push2_vp(LDOUBLE,(void *)&result); 
							 	
				break;

				case MOD:
					v1=pop2();
					v2=pop2();
					
	//				printf("\n--%%--%FRMT %% %FRMT\n",v1,v2);
					if ((long long int)v2->u.ld!=0) 
						result=
							(long long int)v1->u.ld %
								(long long int)v2->u.ld;
					else runtime(1,"خطای تقسیم بر صفر در محاسبه باقیمانده");
					push2_vp(LDOUBLE,(void *)&result);
				break;
				case EQ:
					v1=pop2();
					v2=pop2();
					
					if (debug==20) 
					printf("\n--EQ--%Lf == %Lf\n",v1->u.ld,v2->u.ld);

					if (v1->u.ld == v2->u.ld) result=1.0; 
						else result=0.0;
					//check negative flag
					if (neg) { result=1-result; neg=0; }

					push2_vp(LDOUBLE,(void *)&result);
				break;
				case LT:					
					v1=pop2();
					v2=pop2();
					
			if (debug==20) printf("\n--LT--%Lf < %Lf\n",v1->u.ld,v2->u.ld);
					if (v1->u.ld < v2->u.ld) result=1.0L; 
						else result=0.0L;	
					//check negative flag
					if (neg) { result=1-result; neg=0; }
			 		push2_vp(LDOUBLE,(void *)&result);
				break;
				case GT:					
					v1=pop2();
					v2=pop2();
					
			if (debug==2) printf("\n--GT--%Lf > %Lf\n",v1->u.ld,v2->u.ld);
					//printf("\n--EQ--%f == %f\n",v1,v2);
					if (v1->u.ld > v2->u.ld) result=1.0L;
						else result=0.0L;
					//check negative flag
					if (neg) { result=1-result; neg=0; }

					push2_vp(LDOUBLE,(void *)&result); 	
				break;
				case LTE:
					v1=pop2();
					v2=pop2();
			if (debug==20) printf("\n--LTE--%Lf <= %Lf\n",v1->u.ld,v2->u.ld);
					
	//				printf("\n--LTE--%f == %f\n",v1,v2);
					if (v1->u.ld <= v2->u.ld) result=1.0L; 
					else result=0.0L;			
					//check negative flag
					if (neg) { result=1-result; neg=0; }
		 			push2_vp(LDOUBLE,(void *)&result); 	
				break;
				case GTE:
					v1=pop2();
					v2=pop2();
			if (debug==20) printf("\n--GTE--%Lf == %Lf\n",v1->u.ld,v2->u.ld);
					
					//printf("\n--EQ--%f == %f\n",v1,v2);
					if (v1->u.ld >= v2->u.ld) result=1.0L; 
							else result=0.0L;
					//check negative flag
					if (neg) { result=1-result; neg=0; }

					 push2_vp(LDOUBLE,(void *)&result); 		
				break;

				case IS:
				  	// no operato change
				break;

				case EVAL: // assign value
				  	// no operato change
				break;

				case FMT: // assign value
				  	v1=pop2();
					_format[top2+1]= v1->u.ld;
					//				
				break;
	
				case NOT:
					//stack[top-1]->neg=1;
					neg=1;
				break;

				case NOT2:
					v1 =pop2();
				
					result=!(v1->u.ld);
					
					push2_vp(LDOUBLE,(void *)&result); 
				break;

				case CORRECT:
					//printf("\n\FFFFFFFFF");
					//fflush(stdout);
					fix=1;
				  	//if (stack[top-1].u.op=='/') stack[top-1].u.op= '\\';
				break;
				case FARMAN: {
					v1=pop2();	
					// call external function
					external_functions[(int )v1->u.ld].func();
				}					
				break;
			} 
		}
		else if (stack[top]->type==DIGIT) {
		        
		//   	printf("\n eval, varc=%d inFunction=%d", var_counter, inFunction);
			input_command=0; //دستور ورودی نباید حاوی پارامتر مقداری باشد
			//printf("\n digit=[%FRMT]",*(stack[top].u.val.value.ld));
			long double v1 = LDVALUE(stack[top]->u.val);
			if (debug)
				printf("digit=%Lf, sp=%d",v1, top2);
			push2_vp(LDOUBLE, (void *)&v1);
		}
		else if (stack[top]->type==ID) {
		    // todo : check for function ID () at this point call function
		    if (debug==4) printf("\n ID=%d, IP=%d, IX=%d", stack[top]->id, stack[top]->tok_ip, stack[top]->tok_ix);
		    if (debug ==4 && stack[top]->tok_ip>=0) {
		    	printf("\n+++++++++++++++this is function");
		    }
		    if (stack[top]->tok_ip >= 0) {
		    	//printf("\nthis is function top=%d id=%d [%s] IP=%d,\n", top, stack[top]->id, stack[top]->u.tok, values[stack[top]->id]->IP);
 		      // exit(0);
		        //todone: This is function call
		       // printf("\nstack2 top= (%d) value=(%Lf) ", top2, stack2[top2].u.ld);
		       // push for all local variales in the function
		       
		       int func= values[stack[top]->id]->IP;
      		//       int func= stack[top]->tok_ix;
      		       
		       int varc=nodes[func].var_count - nodes[func].arg_count;
		       int argc=nodes[func].arg_count;
		       
		      if (debug==4)
		      	 printf("\nbefore call sp=%d , varc=%d, argc=%d\n", top2, varc, argc);
		       result=0.0L;
		       push2_vp(LDOUBLE, (void *)&result);  // for function result value
		       		       
		       // todone: can add to sp2 value instead of while
		       top2 += varc;
		      // printf("\ns2 sp=%d", top2);
		       //while (ac) {
		           //make space for local variables on stack
		           //push2_vp(LDOUBLE, (void *)&result); 
		           //ac--;
		       //}
		       // now call function
		      int _FBP= top2 - argc - varc;
		      if ( _FBP < -1 ) { // wrong number of parameters
		      	_error(1,"تعداد آرگومانهای تابع با پارامترهای ارسالی مطابقت ندارد.");
		      }
		      if (debug==4) printf("\n*******call start sp=%d BP=%d\n", top2, _FBP);
		      
		      //printf ("\ncalling function = %d\n", func);      		
		       run(func+1, _FBP); // next instruction of func		      
      		   if (debug==4) printf("\n-------call end sp=%d BP=%d\n", top2, _FBP);
		       //printf("\naf1 sp=%d", top2);
		       
		       top2 -= varc;  //remove local variables from stack
		       //printf("\naf2 sp=%d", top2);
		       
		       v1=pop2();  // result value

		       if (debug==4)	
		       	printf("\nfunction result= %Lf\n", v1->u.ld);
		       	
		       top2 -= (argc-1); // remove args from stack -1 for result
		       
		       if (debug==4)	
		       	printf("\nstack top= %Lf\n", stack2[top2].u.ld);
		       if (debug==4)	
		       	printf("\nfunction result= %Lf\n", v1->u.ld);
		       	
		     //  printf("\nargs sp=%d\n", top2);
		       if (neg) { v1->u.ld= !v1->u.ld; neg=0; }
		       push2_item(*v1);		  
		       //todone:  stack pointer correctness
		      // exit(0); //disable function call
		    } else { // this is a variable local or global
		    // todone: what about getVar function and setVar
		    	if (stack[top]->tok_ix > 0) { //local
					//v1=  getVarLocal(stack[top]->tok_ix);
					if (debug){
						printf("\nlocal var=#%d[%Lf], BP=%d\n", 
							stack[top]->tok_ix,
							stack2[_BP+stack[top]->tok_ix].u.ld,
							_BP);
					}
		
					stack_item v;			
					v=stack2[_BP + stack[top]->tok_ix];
					
					push2_item(v);	

		    	} else {  //global
			    	variant  * v1;
					v1=  getVar(stack[top]->id);
							
					if (v1->datatype==LDOUBLE)  {
						push2_vp(LDOUBLE, (void *)(v1->start));
					} else   if (v1->datatype==TEXT) {
//					    printf("\nSTRING1 %s", STVALUEP(v1));
						push2_st(STVALUEP(v1));
					}
			}				
		    }

		}
		else if (stack[top]->type==STRING) {			 
			 push2_st(STVALUE(stack[top]->u.val));
		}
		pop();
	}

	int mode=0;
	/* mode
		1x	write	
		2x	read
	*/
/*
	نمونه دستورات خروجی:
	13	مقدار ....  را در خروجی بنویس.
	12	مقدار ....  را بنویس.
	دستور انتساب:
	13	مقدار ..... را در متغییر بنویس.
	13	مقدار ... را در متغییر ذخیره کن.
	11	مقدار ... = متغییر. 
	** متغییر می‌تواند از نوع فایل باشد.
	نمونه دستورات ورودی:
		مقدار ....  را از ورودی بخوان.
		مقدار ....  را بخوان.
		مقدار ....  را از متغییرفایل  بخوان.
	کلمات مجاز بعد از حرف اضافه /را/:  /در/ /از/ /بخوان/ /بنویس/.
	کلمات مجاز بعد از حرف اضافه /در/:  /خروجی/	/متغییر/.
	بعد از متغییر:		/بخوان/	/بنویس/	/ذخیره کن/.
	
	22 /را از/ 	نشان دستور ورودی است.
	21 /را بخوان/	نشان دستور ورودی است.	معادل==>	را از ورودی بخوان.
	13 /را در/ 	نشان دستور خروجی یا انتساب است.
	12 /را بنویس/	نشان دستور خروجی است.	معادل==> 	را در خروجی بنویس.
*/
	
	if (token->type == OP) {
		if(token->u.op=='=') mode=11;
		else 
		if (token->u.op=='.') {
			top2=_top2-1;
		} else  runtime(1,"عبارمحاسباتی یا ورودی ناقص است.");
		
		if (debug==4) printf("\n++end of statement");
	} else	if (token->type == ID && token->id==RA ) {
		token=token->next; // در  از   بخوان  بنویس  افزایش کاهش
	//	printf("\n--->%s",token->u.tok);
		if (token->id==AFZAYESH ) mode=30;
		else 
		if (token->id==KAHESH) 	mode=40;
		else 
		if (token->id==DAR) 	mode=13;
		else 
		if (token->id==AZ)	 mode=22;
		else 
		if (token->id==BEKHAN) 	mode=21;
		else 
		if (token->id==BENVIS) 	mode=12;
		else 	runtime(1,"دستور ورودی خروجی ناقص است.");
	} else runtime(1,"دستور ورودی یا خروجی ناقص است.");
	
	
	if (mode>0) {
		if (mode < 20) {// write command	11 or 12 or 13
			if (mode==12) {
				int i=0;
				for (i=top2; i>= _top2 ; i--) {
					print_item(stack2[i],i);
					pop2();
				}
				fflush(stdout);
			} else {
				token=token->next;
				if (token->type==ID) {
				   if(token->id == KHOROJI ) {
				   	if (debug==4) printf("\n KHOROJI ");
					int i=0;
					for (i=top2; i>= _top2 ; i--)
						print_item(stack2[i],i);
					fflush(stdout);
				   } else {
					//TODO: check for write file here
					while (top2 >= _top2) {
					  if (token->tok_ix > 0 ) { // it is local var
					  	if(debug) 
					  	printf("\naccess local var %d, V=%Lf", token->tok_ix, stack2[_BP+token->tok_ix].u.ld);
					 // 		fflush(stdout);
					  	stack2[_BP+token->tok_ix]= stack2[top2];
					  } else {
						if (stack2[top2].dt==LDOUBLE)
						 set_var_ld(values[token->id],stack2[top2].u.ld );
						else {
						 //printf("\nSTRING2 %d =%s", token->id, stack2[top2].u.st);
						 set_var_st(values[token->id],stack2[top2].u.st );
						}
					  }

						top2--;
						last_token=token;
						token=token->next;
						if (token->type!=ID && top2>=_top2) 
							runtime(1,"اینجا یک متغییر لازم است.");
						
						if (token->id==ZAKHIREH || 
							token->id==BENVIS) {
							token=last_token;
							break;
						}
					}

				   }
				} else runtime(1, "ID requiered ");
			}

			
			if (mode==13) {  // 
				do{
					token=token->next; // ذخیره
					if (token->type!=ID || token->id!=ZAKHIREH ) {
					  if (token->id==BENVIS) break;
			  runtime(1, "حرف اضافه /ذخیره/‌ یا /بنویس/ جا مانده 123 است.");
					}
					token=token->next; // کن
					if (token->type!=ID ||	token->id!=KON ) 
						runtime(1,"حرف اضافه /کن/ جا مانده است.");
				} while(0);
			}
		} else 
		if (mode < 30) { //read command
	/* در اینجا بایستی مقادیر از فایل یا ورودی خوانده شده و در متغییرها ذخیره شود.
	 در عملیات ورودی عملگری تعریف نمی‌شود و متغییرهای که بایستی خوانده شوند در پشته وجود
	 دارند.
	مثال:
		مقدار الف ب ج را بخوان.
		مقدار الف ب ج را از ورودی بخوان.
	comment
	*/
 
			token=token->next;  // ورودی یا بخوان
			if (mode==22) {
				token=token->next;   //بخوان
				if (token->id!=BEKHAN)
					 runtime(1,"کلمه /بخوان/ مد نظر است.");

				//TODO:input file here	
			}
			int i, sign=1, var;
		  	//for(i=1; i<= saved_top; i++)
			//	printf("\n---%d --> %s\n", i,stack[i].u.tok);
			struct token  tok;
			if (input_command==0) 
				runtime(1,"برای دستور بخوان بایستی از پارامترهای نوع متغییر استفاده شود.");

			for (i= _top+1 ; i<= saved_top; i++) {
				var=stack[i]->id;	
				//todo:<b>*</> check for saveing in local variables
				//if it is local use stack to save
				tok=getToken(1);	
//		printf("\ni=%d, ix=%d %Lf*\n",i, stack[i]->tok_ix, LDVALUE( tok.u.val ));
				if (stack[i]->tok_ix > 0) { //this is local var
				//todo: reading string values for local vars.
				
				    stack2[ _BP + stack[i]->tok_ix ].dt= LDOUBLE;

				    if (tok.type==STRING) {
					     stack2[ _BP + stack[i]->tok_ix ].dt= TEXT;
					     stack2[ _BP + stack[i]->tok_ix ].u.st=
						     tok.u.val.start;
				    } else 
     				       stack2[ _BP + stack[i]->tok_ix ].u.ld
					      =  LDVALUE( tok.u.val );
					     
				} else	{
					//printf("\ni=%d, zzz", i);
					setVar(var, tok.u.val );
				}
			}

		} else if (mode<40) {// افزایش
			int i, var;
			token=token->next;
			if (token->id!=BEDEH) runtime(1,"کلمه /بده/ لازم است.");
			for (i=_top+1; i<=saved_top; i++) {
				var=stack[i]->id;
				if (stack[i]->tok_ix>0) {
					stack2[ _BP+ stack[i]->tok_ix ].u.ld ++;
				} else {
					variant * val= getVar(var);
					if (val->datatype==LDOUBLE) {
						(LDVALUEP(val))++;
					}
					else runtime(1,"عملگر افزایش برای رشته ها تعریف نشده است.");
				}
			}
		} else if (mode<50) {// کاهش 
			int i, var;
			token=token->next;
			if (token->id!=BEDEH) runtime(1,"کلمه /بده/ لازم است.");
			for (i=_top+1; i<=saved_top; i++) {
				var=stack[i]->id;
				if (stack[i]->tok_ix>0) {
					stack2[ _BP+ stack[i]->tok_ix ].u.ld ++;
				} else {	
					variant  *val=getVar(var);
					if (val->datatype==LDOUBLE)
						(LDVALUEP(val))--;
					else 
					   runtime(1,"عملگر کاهش برای رشته ها تعریف نشده است.");
				}
			}
		}
	} 
//	printf("\n--IF %d\n",(int)*(stack2[top2]->value.ld));
//	if(debug) printf("\ntop2=%d[%Lf],\e[0;31m_-_-_\e[7;0m\n",_top2, stack2[_top2].u.ld);
	if (debug==4) printf("\n-------- TOP2=%d\n", top2);		
	result = stack2[_top2].u.ld;
	
	top2=_top2-1; 
	return result;
}
#endif

