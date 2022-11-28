#ifndef __EXTERNAL_H
#define __EXTERNAL_H
#include <string.h>
#include "def.h"

#define MAXFUNCTIONS 100

stack_item * pop2();
void push2_ld(long double value);
void push2_vp(datatypes dt, void *value);
extern int top2;
extern stack_item stack2[];


typedef struct  external_function {
   char  name[50];
   void  (* func)();
} external_function;


char *strrev(char *str) {
	//todo: write strlen for mbstring
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}

void   ex_kati() {
	/*printf("\n\ 
	\n*******************************************************\ 
        \n*                  سلام من کاتی %4.2f هستم             *\n \ 
	\n*******************************************************\n\n",
		KATI_VERSION);*/
	long double result= KATI_VERSION;
	//printf("\n This is strlen %s =%Lf\n", v->u.st, result);
	push2_vp(LDOUBLE,(void *)&result);	
}

void   ex_strlen() {
	stack_item *v;

	v=pop2();
	//todo: check for TEXT here
	if (v->dt!=TEXT) {
		runtime(1,"اینجا یک رشته برای محاسبه طول رشته لازم است");
	}		
	
	long double result= strlen(v->u.st);
	//printf("\n This is strlen %s =%Lf\n", v->u.st, result);
	push2_vp(LDOUBLE,(void *)&result);
}

void   ex_strrev() {
	stack_item *v;

	v= &stack2[top2];
	//todo: check for TEXT here
	if (v->dt!=TEXT) {
		runtime(1,"اینجا یک رشته برای محاسبه طول رشته لازم است");
	}		
	
	strrev(v->u.st);
}

void   ex_strcat() {
	stack_item *v1;
	stack_item *v2;	

	v1= pop2();
	v2= &stack2[top2];	
	//todo: check for TEXT here
	if (v1->dt!=TEXT) {
		runtime(1,"اینجا یک رشته برای محاسبه الحاق رشته لازم است 1");
	}		
	if (v2->dt!=TEXT) {
		runtime(1,"اینجا یک رشته برای محاسبه الحاق رشته لازم است 2");
	}		
	
	strcat(v2->u.st, v1->u.st);
}


external_function  external_functions[MAXFUNCTIONS]= {
	{"نسخه کاتی",   ex_kati}
	,{"طول رشته", ex_strlen }
	,{"معکوس رشته", ex_strrev }
	,{"الحاق رشته", ex_strcat }
	,{0,0} // EOL
};


//todo: search optimization to check external function in compile time!?
int  check_external(char *s) {
 int i;
 for (i=0;  external_functions[i].name[0]  ; i++ ) {
   if (!strcmp(s,external_functions[i].name)) 
   	return i;
 }
 return -1;// function not found
}

#endif
