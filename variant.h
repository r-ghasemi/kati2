#ifndef __VARIANT_H
#define __VARIANT_H

#include "def.h"

#define  	VARNAME char
#define  	MAX_VAR 512

#define 	KATI		long double
#define	    KATIV		unoin value

#define 	LDVALUE(v)	(*((long double *) ((v).start)))
#define 	LDVALUEP(v)	(*((long double *) ((v)->start)))

#define	    STVALUE(v) 	((char *) ((v).start))
#define	    STVALUEP(v) ((char *) ((v)->start))

#define 	MAX_HEAP_SIZE 	1*1024*1024

unsigned char heap[MAX_HEAP_SIZE];  //1M memory area
unsigned char *	  heap_pointer;


typedef enum  {
		CHAR, UCHAR, 
		INT, UINT, LINT, ULINT,LLINT,ULLINT, 
		FLOAT, DOUBLE, LDOUBLE,
		TEXT, STRUCT, ARRAY, 
		TIME, DATE, TIMESTAMP
} datatypes;

typedef struct variant{
	datatypes 	 datatype;
	void *	     start;	//start location in the heap or memory
	unsigned     int size;	//	for string type
	short        int set;
	int          IP; // IP addr for functions
} variant;

typedef struct {
    VARNAME name[128];
    int     ix; //ix on call stack
} variable;

variant  *  values[MAX_VAR]; // variables pool

int     	var_counter=0;
int         fvar_counter=0;
int         inFunction=0;
variable   	vars[MAX_VAR];
variable    fvars[MAX_VAR];

void init_var(variant * v, datatypes dt, int size) ;

//TODONE:  convert variable name to int at compile time and use number at runtime
//TODONE:  diffrent function for runtime error and compile time error

//TODO: can we use void * instead of variant * ?
struct timeval te;
variant  * getVar(int var) {
     // if (debug) printf("var(get)=%d %f\n",var, vars[var]);
     //todo: check local and global variable
	if (var == ZAMAN) {
		gettimeofday(&te, NULL);
		LDVALUEP(values[ZAMAN])= 
			(long double ) (te.tv_sec*1000LL + te.tv_usec/1000);
		//printf("\n[ %Lf ]", _clock_);
	} 
	return values[var];
}

void setVar(int var, variant  val) {
   // printf("\n----var=%d val=%Lf\n",var,LDVALUE(val));
	*(values[var]) = val;	
}

#define set_var	set_var_ld
void set_var_ld( variant *v , long double value) {
	*((long double * )(v->start))=value;
	v->datatype=LDOUBLE;
	v->set=1;
}

void set_var_st( variant *v , char * value) {
//	printf("\n set_var_st %s" , value);
	v->start= (void *) value;
//	printf("\n set_var_st %s" , STVALUEP(v));
	v->datatype=TEXT;
	v->set=1;
}

void set_var_i( variant *v , int value) {
//	(v->value.i)=value;
	v->datatype=INT;
	v->set=1;
}

void set_var_ui( variant *v , unsigned int value) {
//	(v->value.ui)=value;
	v->datatype=UINT;
	v->set=1;
}

void init_var(variant * v, datatypes dt, int size) {
	(*v).datatype= dt;
	(*v).set=0;
	(*v).IP=-1;	
	
	if ((heap_pointer-heap) >= MAX_HEAP_SIZE) {
		printf("\n\nخطای کمبود حافظه.\n\n");
		exit(1);
	}
	
	switch (dt) {
		case INT: 	
			v->start = (void *) heap_pointer;
			v->size=sizeof(int );
			heap_pointer += sizeof(int );
			break;

		case UINT: 	
			v->start =  (void *)heap_pointer;
			v->size=sizeof(unsigned int );
			heap_pointer += sizeof(unsigned int );
			break;

		case LDOUBLE: 	
			v->start =  (void *)heap_pointer;
			v->size=sizeof(long double );
			heap_pointer += sizeof(long double );
			break;

		case	TEXT:
			if (size > 0) {
			//	(*v).value.st= (unsigned char * )malloc(size);
			 v->start = (void *) heap_pointer;
			 v->size= size;
			 heap_pointer += size;
			}
			else _error(1,"رشته با طول صفر نمی‌شود ساخت.");
			break;
	}
}

variant * create_var(datatypes dt, int size) {
	variant *v=(variant * ) malloc(sizeof(variant ));
	if (!v) _error(1,"خطای کمبود حافظه.");

	init_var(v, dt, size);
	return v;
}

void dispose(variant * v) {
	//free( (*v).value.ld );
}

int function_ip(VARNAME * var) {
    int i;
    for (i=0; i < (var_counter) ; i++)  
    	if (!strcmp(var, vars[i].name) && values[i]->IP >=0 ) {
    		//printf("\nvar %s addr=%d", var, values[i]->IP);
    		return values[i]->IP;
    	}
    return -1;
}

int check(VARNAME * var) {
	int i;
	char err[100];
	int *vc=(inFunction) ? &fvar_counter: &var_counter;
	//printf("\n--inFunction=%d, checking %s: ", inFunction, var);
	if (inFunction) {
	    for (i=0; i < (fvar_counter) ; i++)  {
	//	printf("\n-------- %s [%d]<--> %s [%d]", var, strlen(var),vars[i], strlen(vars[i]));
		    if (!strcmp(var, fvars[i].name)) return i;
	    }
	    //check for function name in current function
        for (i=0; i < (var_counter) ; i++)  {
    	   if (values[i]->IP >=0 && !strcmp(var, vars[i].name)) return i;
        }	    
	} else for (i=0; i < (var_counter) ; i++)  {
	//	printf("\n-------- %s [%d]<--> %s [%d]", var, strlen(var),vars[i], strlen(vars[i]));
		if (!strcmp(var, vars[i].name)) return i;
	}
	
	//TODO: call create_var to create new variable
	if ((*vc) == MAX_VAR) 
		_error(1,"متغییر دیگری قابل تعریف نیست.");

	// default type is long double
	if (!inFunction) {
	    values[var_counter]= create_var( LDOUBLE, 0);
    }
	
	if (inFunction) fvars[fvar_counter].ix=-1;  else vars[var_counter].ix=-1;
	
	strcpy( inFunction ? fvars[fvar_counter].name: vars[var_counter].name , var);
	
	//set_var call at first assignment
	//printf("%d", var_counter);
	(*vc)++;
	return (*vc)-1;	
}

struct context {
  	int    counter;
 	struct token  * end;
 	struct token  * start;
};

struct context _main;

#endif

