#ifndef __EXTERNAL_H
#define __EXTERNAL_H
#include <string.h>
#include "def.h"

#define MAXFUNCTIONS 100

variant * pop2();
/*void push2_ld(long double value);*/
void push2_item(variant item);
extern int top2;
extern variant stack2[];


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
	printf("\n\
	\n*******************************************************\
	\n*                  سلام من کاتی %4.2f هستم             *\n \
	\n*******************************************************\n\n",
		KATI_VERSION);
		
	variant result;
	init_var(&result, FLOAT, 1);
	result.data.u.f = KATI_VERSION;
	//printf("\n This is strlen %s =%Lf\n", v->u.st, result);
	push2_item(result);
}

void   ex_strlen() {
	variant *v;

	v=pop2();
	//todo: check for TEXT here
	if (v->dt!=TEXT) {
		runtime(1,"اینجا یک رشته برای محاسبه طول رشته لازم است");
	}		
	
	variant result;
	init_var(&result, INT, 1);
	result.data.u.i = strlen(v->data.u.st);
	//printf("\n This is strlen %s =%Lf\n", v->u.st, result);
	push2_item(result);
}

void   ex_strrev() {
	variant *v;

	v= &stack2[top2];
	//todo: check for TEXT here
	if (v->dt!=TEXT) {
		runtime(1,"اینجا یک رشته برای محاسبه طول رشته لازم است");
	}		
	
	strrev(v->data.u.st);
}

void   ex_strcat() {
	variant *v1;
	variant *v2;	

	v1= pop2();
	v2= &stack2[top2];	
	//todo: check for TEXT here
	if (v1->dt!=TEXT) {
		runtime(1,"اینجا یک رشته برای محاسبه الحاق رشته لازم است 1");
	}		
	if (v2->dt!=TEXT) {
		runtime(1,"اینجا یک رشته برای محاسبه الحاق رشته لازم است 2");
	}		
	
	strcat(v2->data.u.st, v1->data.u.st);
}


external_function  external_functions[MAXFUNCTIONS]= {
	{"نسخه کاتی",   ex_kati}
	,{"طول رشته", ex_strlen }
	,{"معکوس رشته", ex_strrev }
	,{"الحاق رشته", ex_strcat }	
};


//todo: search optimization to check external function in compile time!?
int  check_external(char *s) {
 int i;
 for (i=0;  sizeof(external_functions)  ; i++ ) {
   if (!strcmp(s,external_functions[i].name)) 
   	return i;
 }
 return -1;// function not found
}

#endif
