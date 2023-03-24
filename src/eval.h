#ifndef __EVAL_H
#define __EVAL_H

#include "external.h"
//#include "assign.h"
#include "ktmath.h"

#define STACKSIZE	50000

//int 		top=-1;
//struct 	token 	*stack[STACKSIZE];
int 	    top2=-1;
variant	    stack2[STACKSIZE];
float	    _format[STACKSIZE]={0.0};

// stack for operators in parser to convert infix to postfix
int			top3=-1; 
struct token stack3[STACKSIZE];

void push_op(struct token tok) {
  if (top3==STACKSIZE) _error(1, "خطای سرریز پشته (۳)");
  //printf("Added %c=%d\n", tok.u.op, tok.u.op);
  top3++;
  stack3[top3]= tok;
}

struct token pop_op() {
  if (top3==-1) _error(1,"خطای تبدیل در جمله محاسباتی");
  struct token temp=stack3[top3];
  top3--;
  return temp;
}

unsigned int top_op() {
	if (top3==-1) return 0;
	return stack3[top3].u.op;
}

void print_item(variant *si, float format) {
	char fmt[20];
	variant *v= si;
	
	/*if (!si->data) {
		printf("<NULL>");
		return;
	}*/
	//printf("A=%d\n", v->isArray);
	//if (si->ref) v = si->ref ;// si->refvar->data.u.a + si->offset;
	sprintf(fmt, FORMAT[si->dt], format);
	
//	printf("data type=%d format=%s offset=%d\n", si->dt, fmt, si->offset);	
	if (si->dt==CHAR) {
		printf(fmt, (v->isArray) ? *((char *)v->data.u.a + v->offset ) : v->data.u.c);
		return ;
	} 
		
	if (si->dt==INT) {
		printf(fmt, (v->isArray) ? *((int *)v->data.u.a + v->offset ) : v->data.u.i);	
		return ;
	} 
	
	if (si->dt==UINT) {
		printf(fmt, (v->isArray) ? *((unsigned int *)v->data.u.a + v->offset ) : v->data.u.ui);
		return ;
	} 	
	
	if (si->dt==LINT) {
	//	printf("i=%d, f=%lf\n", format, _format[format]);
		printf(fmt, (v->isArray) ? *((long int *)v->data.u.a + v->offset ) : v->data.u.li);
		return ;
	} 
		
	if (si->dt==ULINT) {
	//	printf("i=%d, f=%lf\n", format, _format[format]);
		printf(fmt, (v->isArray) ? *((unsigned long int *)v->data.u.a + v->offset ) : v->data.u.uli);	
	} 

	if (si->dt==LLINT) {
		printf(fmt, (v->isArray) ? *((long long int *)v->data.u.a + v->offset ) : v->data.u.lli);		
		return ;
	} 			
	
	if (si->dt==ULLINT) {
	//	printf("i=%d, f=%lf\n", format, _format[format]);
		printf(fmt, (v->isArray) ? *((unsigned long long int *)v->data.u.a + v->offset ) : v->data.u.ulli);
			return ;
	} 	
			
	if (si->dt==FLOAT) {
		printf(fmt, (v->isArray) ? *((float  *)v->data.u.a + v->offset ) : v->data.u.f);			
		return ;
	}	
		
	if (si->dt==DOUBLE) {
		printf(fmt, (v->isArray) ? *((double  *)v->data.u.a + v->offset ) : v->data.u.d);				
		return ;
	}	
		
	if (si->dt==LDOUBLE) {
		printf(fmt, (v->isArray) ? *((long double  *)v->data.u.a + v->offset ) : v->data.u.ld);				
		return ;
	}	
	//TEXT
	if (si->dt==TEXT) {
		printf("%s", v->data.u.st );
		return ;
	}
	
	printf("data type=%d not handled int print_item eval.h(%d)\n", si->dt, __LINE__);	
}

/*void push(struct token *tok) {
  if (top==STACKSIZE) runtime(1, "stack overflow(1)");
  top++;
  stack[top]=tok;
}

struct token *pop() {
  if (top==-1) runtime(1,"خطای محاسباتی");
  struct token *temp=stack[top];
  top--;
  return temp;
}*/


void push2_item(variant item) {
  if (top2==STACKSIZE) runtime(1,"خطای سرریز پشته");  
  
  top2++;
  stack2[top2] = item;
  stack2[top2].ref = NULL;
}


void _push2_vp(variant * var, int offset) {
  if (top2 == STACKSIZE) runtime(1,"خطای سرریز پشته");    
  top2++;

  stack2[top2]= *var;
  
  stack2[top2].offset = offset;
  stack2[top2].ref = var;     
}
/*
void push2_vp(datatypes dt, void *value) {
	_push2_vp(dt, value, NULL, 0);
}

void push2_i(int value) {
  if (top2==STACKSIZE) runtime(1,"خطای سرریز پشته.");    
  top2++;
  stack2[top2].u.ld = value;
  stack2[top2].dt   = INT;
}

void push2_ld(long double value) {
  if (top2==STACKSIZE) runtime(1,"خطای سرریز پشته");  
  
  top2++;
  stack2[top2].u.ld = value;
  stack2[top2].dt   = LDOUBLE;
}

void push2_st(char * value, int isref) {
  if (top2==STACKSIZE) runtime(1,"خطای سرریز پشته اتفاق افتاده است.");  
  
  top2++;
  stack2[top2].u.st =  value;
  stack2[top2].dt   = TEXT;
  
  //stack2[top2].var= NULL;
  //if (isref)  stack2[top2].var= (char **) value;
}
*/
variant * pop2() {
  if (top2==-1) runtime(1,"ورودی کامل نیست.");
  variant *temp;
  temp= stack2+top2;
  top2--;
  return temp;
}

variant * getVarLocal(int  ix ) {
	//variant * v;
	return NULL;
}

variant  eval(int _BP) {
//	head=nodes[_ip].start;
	struct token * token = nodes[_ip].start;
	struct token * first_var= token->next;
	struct token * last_var;
	struct token * last_token;
	_flag=0;
	int  _top2=top2+1;/*,  _top=top+1*/;
	int  midofStack=-1;

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

	/*while (0) {
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
				//todo: DECR is not for functions or constants
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
	*/

	variant *v1,*v2;
	variant  result;
	variant  temp;
	init_var( &result, LDOUBLE, 1);
	init_var( &temp, INT, 1);	
	alloc_var(&temp);
	//int saved_top= top;
	int input_command=1;
	
//	negation in compairsion operators and fix division
	int neg=0, fix=0;
	
       
//	printf("\n eval, varc=%d inFunction=%d", var_counter, inFunction);        
//	while (top >= _top ) {
	while (1) {		
		token=token->next;	

		if (!token) break; // without [.] at end of statement
	    if (token->type==OP) {
			if (token->u.op=='=') {//assignment  
				midofStack=top2;
				continue;
			}
			if (token->u.op=='.') { 
			//end of statement
				break;
			}
		} else if (token->type==DIGIT) {			 
	    } else if (token->type==ID) { 			//دستور ورودی یا خروجی با حرف اضافه /را/ مشخص می‌شود.
   			last_var= token;
			if ( token->id==BEKHAN 
				|| token->id==BENVIS
				|| token->id==AFZAYESH
				|| token->id==KAHESH
				) break;
			if (token->id==ZAKHIREH) {
				 token->id=BENVIS;	
				 break;
			}
			if (token->id==RA) {//assignment  
				midofStack=top2;
				continue;
			}
			
			if (token->id==KHOROJI || token->id==VORODI) {//TODO: convert to standard file
				continue;
			}
			
			
			if (token->id==BAR ||				
				//token->id==VA ||				
				token->id==BA ||
				token->id==DAR ||
				token->id==TA  
			)  continue;			
			
	    } 
	    else if (token->type==STRING) {
	    } else {
		    if (token->id==AZ) continue;
	    	printf("token type=%d\n", token->type);
		    runtime(1,"عبارت محاسباتی شامل  شناسه غیر مجاز است.");
	    }
		
		if (token->type==OP) {
			//if (token->u.op!=EVAL) input_command=0; 
			//دستور ورودی نباید حاوی عملگر باشد.
			
			switch( token->u.op ) {
				/*case INCR:	
					v1=pop2();
					result= ++ v1->u.ld ;				
					push2_vp(LDOUBLE,(void *)&result);
					//++(stack2[_BP+token->tok_ix].u.ld);
					break;*/
				/*case DECR:	
					v1=pop2();					
					result= v1->u.ld -1.0L;
					push2_vp(LDOUBLE,(void *)&result);
					break;*/
					
				case COMMA: // comma operator
				break;
				
				case '@':	// نصف
					v1=pop2();	
					temp.data.u.i=2;				
					kt_div(v1, &temp, &result);
					push2_item(result);
					
				break;
				
				case DIV3: //ثلث
					v1=pop2();					
					temp.data.u.i=3;				
					kt_div(v1, &temp, &result);
					push2_item(result);
				break;
				
				case DIV4: // ربع
					v1=pop2();					
					temp.data.u.i=4;				
					kt_div(v1, &temp, &result);
					push2_item(result);
				break;
				
				case DIV5: // خمس
					v1=pop2();					
					temp.data.u.i=5;				
					kt_div(v1, &temp, &result);
					push2_item(result);
				break;
				
				case DIVN: // معکوس		
					v1=pop2();		
					temp.data.u.i=1;
					kt_div(&temp, v1, &result);
					push2_item(result);						
				break;
				
				case MIRROR: // قرینه
					v1 =pop2();
					temp.data.u.i=0;				
					kt_sub(&temp, v1, &result);	
					push2_item(result);					 
				break;
				
								
				case SQR2:  // x^2 مربع
					v1 =pop2();				
					kt_mul(v1, v1, &result);	
					push2_item(result);
				break;
				
				case SQR3:  // x^3 مکعب
					v1 =pop2();
					kt_mul(v1, v1, &result);
					temp=result;
					kt_mul(v1, &temp, &result);							
					push2_item(result);					 
				break;				
				
				case SQRT: // جذر
					v1 =pop2();
					kt_sqrt(v1, NULL, &result);
					push2_item(result);				
				break;
				
				/*
				case AND: //هم  در ترکیب عطفی
					v1=pop2();				
					v2=pop2();				
					
					result= (v1->u.ld!=0.0L && v2->u.ld!=0.0L);
					push2_vp(LDOUBLE,(void *)&result);
				break;
			
				case OR: //هم  در ترکیب عطفی
					v1=pop2();				
					v2=pop2();				
					
					result= (v1->u.ld!=0.0L || v2->u.ld!=0.0L);
					push2_vp(LDOUBLE,(void *)&result);
				break;		
				*/
				case ADD: //جمع
					v1=pop2();				
					v2=pop2();						
					kt_add(v1,v2, &result);
					push2_item(result);
				break;

				case MULT: // ضرب
					v1=pop2();				
					v2=pop2();				
					kt_mul(v1,v2,&result);
					push2_item(result);	
				break;
				
				case SUB: // تفریث
					v1=pop2();
					v2=pop2();
					
					kt_sub(v2,v1,&result);
					push2_item(result);					 	
				break;
				
				case DIV:	//	تقسیم								
					v1=pop2();
					v2=pop2();		
					kt_div(v2, v1, &result);
					push2_item(result); 							 	
				break;

				case MOD: // باقیمانده
					v1=pop2();
					v2=pop2();					
					kt_mod(v2, v1, &result);
					push2_item(result);
				break;
				
				case EQ:
					v1=pop2();
					v2=pop2();
					
					kt_eq(v1,v2,&result);
					//check negative flag
					if (neg) { result.data.u.i = !result.data.u.i; neg=0; }

					push2_item(result);
				break;

				case NE:
					v1=pop2();
					v2=pop2();
					
					kt_eq(v1,v2,&result);
					result.data.u.i = !result.data.u.i;
					
					//check negative flag
					if (neg) { result.data.u.i = !result.data.u.i; neg=0; }

					push2_item(result);
				break;
				
				case LT:					
					v1=pop2();
					v2=pop2();
					
					kt_lt(v2, v1, &result);						
					//check negative flag
					if (neg) { result.data.u.i = !result.data.u.i; neg=0; }				
			 		push2_item(result);
				break;
				
				case GT:					
					v1=pop2();
					v2=pop2();					
				
					//	else result=0.0L;	
					kt_gt(v2, v1, &result);						
					//check negative flag
					if (neg) { result.data.u.i = !result.data.u.i; neg=0; }				
			 		push2_item(result);				 	
				break;
				
				
				case LTE:
					v1=pop2();
					v2=pop2();					
						
					kt_lt(v2, v1, &result);
					if (!result.data.u.i)  kt_eq(v2, v1, &result);				
					//check negative flag
					if (neg) { result.data.u.i = !result.data.u.i; neg=0; }				
			 		push2_item(result);		
				break;
				
				case GTE:
					v1=pop2();
					v2=pop2();					
						
					kt_gt(v2, v1, &result);						
					if (!result.data.u.i)  kt_eq(v2, v1, &result);
					//check negative flag
					if (neg) { result.data.u.i = !result.data.u.i; neg=0; }				
			 		push2_item(result);			
				break;

				case IS:
				  	// no operato change
				break;

				case EVAL: // assign value
				  	// no operato change
				break;

				case FMT: // assign value
				  	v1=pop2();
//					  	printf("format type=%d val=%f\n",v1->dt, (float) v1->data.u.f);
					_format[top2]= valueof_f(v1);
				break;
	
				case NOT:
					//stack[top-1]->neg=1;
					neg=1;
				break;
/*
				case NOT2: // نقیض
					v1 =pop2();
				
					result=!(v1->u.ld);
					
					push2_vp(LDOUBLE,(void *)&result); 
				break;
*/
				case CORRECT: // صحیح مثلا تقسیم صحیح
					//printf("\n\FFFFFFFFF");
					//fflush(stdout);
					fix=1;

				break;
				case FARMAN:  // اجرای دستورات خارجی
					v1=pop2();	
					// call external function
					external_functions[v1->data.u.i].func();				
				break;
			} 
		}
		else if (token->type==DIGIT) {		       
		//   	printf("\n eval, varc=%d inFunction=%d", var_counter, inFunction);
			input_command=0; //دستور ورودی نباید حاوی پارامتر مقداری باشد
			//printf("\n digit=[%FRMT]",*(token.u.val.value.ld));			
			push2_item(token->u.val);
		}
		else if (token->type==ID) {
		
			last_var = token;
		    // todo : check for function ID () at this point call function
		    if (debug==4) printf("\n ID=%d, IP=%d, IX=%d", token->id, token->tok_ip, token->tok_ix);
		    if (debug ==4 && token->tok_ip>=0) {
		    	printf("\n+++++++++++++++this is function");
		    }
		    if (token->tok_ip >= 0) { //this is function
		    	//printf("\nthis is function top=%d id=%d [%s] IP=%d,\n", top, stack[top]->id, stack[top]->u.tok, values[stack[top]->id]->IP);
 		      // exit(0);
		        //todone: This is function call
		       // printf("\nstack2 top= (%d) value=(%Lf) ", top2, stack2[top2].u.ld);
		       // push for all local variales in the function
		       
		       int func= values[token->id]->IP;
      		//       int func= token->tok_ix;
      		       
		       int varc = nodes[func].var_count - nodes[func].arg_count;
		       int argc = nodes[func].arg_count;
		       
		      if (debug==4)
		      	 printf("\nbefore call sp=%d , varc=%d, argc=%d\n", top2, varc, argc);
		       //TODO: result=0.0L; =???
		       init_var(&result, DEFAULT_DATA_TYPE, 1);
		       push2_item(result);  // for function result value
		       	
		       int i,j;	       
		       for(i=top2+1, j=0; j<varc; i++, j++) {
		       		init_var( &stack2[i], DEFAULT_DATA_TYPE, 1);
		       		stack2[i].ref=NULL;
		       }
		       
		       top2 += varc;
		       
		      // printf("\ns2 sp=%d", top2);
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
		       
		       v1 = pop2();  // result value

		      // if (debug==4)	
		       //	printf("\nfunction result= %Lf\n", v1->u.ld);
		       	
		       top2 -= (argc-1); // remove args from stack -1 for result
		       
		     //  if (debug==4)	
		      // 	printf("\nstack top= %Lf\n", stack2[top2].u.ld);
		     //  if (debug==4)	
		      // 	printf("\nfunction result= %Lf\n", v1->u.ld);
		       	
		     //  printf("\nargs sp=%d\n", top2);
		     //TODO  if (neg) { v1->u.ld= !v1->u.ld; neg=0; }
		       push2_item(*v1);		
		       //todone:  stack pointer correctness
		      // exit(0); //disable function call
		    } else { // this is a variable local or global
		    // todone: what about getVar function and setVar
		    	if (token->tok_ix > 0) { //local variable
					//v1=  getVarLocal(token->tok_ix);
				/*	if (debug){
						printf("\nlocal var=#%d[%Lf], BP=%d\n", 
							token->tok_ix,
							stack2[_BP+token->tok_ix].u.ld,
							_BP);
					}*/
		
					variant   *v= &stack2[_BP + token->tok_ix];
					
					int ix=0;						
					if (v->isArray) {
						//TODO: pop2() must be of type INT
						variant * vx=pop2();
						if (vx->dt != INT) {
							runtime(1,"اندیس آرایه باید از نوع صحیح باشد");
						}
						ix= vx->data.u.i;
					}									
					_push2_vp (v , ix);
		    	} else {  //global variable
		      	    variant  * v1= getVar(token->id);
					int ix=0;						
					if (v1->isArray) {
						//TODO: pop2() must be of type INT
						variant * vx=pop2();
						if (vx->dt != INT) {
							runtime(1,"اندیس آرایه باید از نوع صحیح باشد");
						}
						ix= vx->data.u.i;
						//printf("ix=%d v1-size=%d id=%d\n", ix, v1->size,token->id);
					}
					
					_push2_vp (v1 , ix);
			   }				
		    }

		}else if (token->type==STRING) {	
		//printf("TXEXT=%s\n", *((char **)token->u.val.data));
			 push2_item(token->u.val);
		}
//		pop(); 
	}

	int i;
	/*for (i=_top2; i<= top2 ; i++) {		
			print_item(&stack2[i],_format[i]);
			printf(" ");
	}
	printf("\n_top2=%d, midof=%d, top2=%d\n", _top2, midofStack, top2);
	fflush(stdout);*/
	//_top2 ---> midofStack --> top2
	int j;
	switch (token->id) {
		case  BENVIS:
			if (top2==midofStack) {
				i=0;
				for (i=_top2; i<= midofStack ; i++)
					print_item(&stack2[i], _format[i]);
				fflush(stdout);
			} else {				
				for(i=_top2, j=midofStack+1; i<=midofStack; i++,j++) {
					if (!stack2[j].ref) 
						runtime(1,"مقصد انتصاب باید قابل آدرس دهی باشد.");					
					kt_assign(&stack2[j], &stack2[i], NULL);					
				}				
			}
		break;
		

		case BEKHAN:
			//printf("BEKHAN\n");
			for(i=_top2, j=midofStack+1; i<=midofStack; i++,j++) {
				if (!stack2[i].ref) 
					runtime(1,"مقصد انتصاب باید قابل آدرس دهی باشد.");
				struct token tok=getToken(1);	// read from input file									
				kt_assign(&stack2[i], &tok.u.val, NULL);					
			}
		break;
			
			
		case AFZAYESH:
		case KAHESH:	
			for(i=_top2, j=midofStack+1; i<=midofStack; i++,j++) {
				if (!stack2[i].ref) 
					runtime(1,"مقصد افزایش/کاهش باید قابل آدرس دهی باشد.");					
				(token->id==AFZAYESH) ? kt_inc(stack2[i].ref, NULL, NULL) 
									  : kt_dec(stack2[i].ref, NULL, NULL);
			}				
			break;		
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
		//	printf("\n--IF %d\n",(int)*(stack2[top2]->value.ld));
//	if(debug) printf("\ntop2=%d[%Lf],\e[0;31m_-_-_\e[7;0m\n",_top2, stack2[_top2].u.ld);
	if (debug==4) printf("\n-------- TOP2=%d\n", top2);		
	result = stack2[_top2];
	
	top2=_top2-1; 
	return result;
}
#endif

