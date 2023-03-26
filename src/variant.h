#ifndef __VARIANT_H
#define __VARIANT_H
#include <sys/time.h>
#include "def.h"

#define  	VARNAME char
#define  	MAX_VAR 512
#define 	DEFAULT_DATA_TYPE	INT
/*
#define 	KATI		long double
#define	    KATIV		unoin value*/

#define 	LDVALUE(v,x)	(*((long double *) ((v).data)+x))
#define 	LDVALUEP(v,x)	(*((long double *) ((v)->data)+x))

//#define	    STVALUE(v) 	((char *) ((v).u.data))
//#define	    STVALUEP(v) ((char *) ((v)->u.data))

//#define 	MAX_HEAP_SIZE 	1*1024*1024

//unsigned char heap[MAX_HEAP_SIZE];  //1M memory area
//unsigned char *	  heap_pointer;

typedef enum  {
		VOID,  /* 0 */
		CHAR, UCHAR,  /* 1 2 */
		INT, UINT, LINT, ULINT,LLINT,ULLINT,  /* 3 4 5 6 7 8 */
		FLOAT, DOUBLE, LDOUBLE, /* 9 10 11*/
		TEXT, STRUCT,  /*  12 13*/
		TIME, DATE, TIMESTAMP /* 14 15 16 */
		,dtFILE /*17*/
} datatypes;

char *FORMAT[]={
	"",
	"%%%0.1fc" , "%%%0.1fc"
	,"%%%0.1fd","%%%0.1fi","%%%0.1fld","%%%0.1flu","%%%0.1flld","%%%0.1fllu"
	,"%%%0.1ff", "%%%0.1flf", "%%%0.1fLf"
	,"%%%0.1fs",""
	,"","",""
};

int _sizeof[]= {
	0,
	sizeof(char),
	sizeof(unsigned char), sizeof(int), sizeof(unsigned int), sizeof(long int),
	sizeof(unsigned long int), sizeof(long long int), sizeof(unsigned long long int),
	sizeof(float), sizeof(double), sizeof(long double),
	0,0,
	0,0,0
};

struct KATI{
	union {
		char  c;
		unsigned char uc;
		int   i;
		unsigned int      ui;
		long  int 		  li;
		unsigned long int uli;
		long long int	  lli;
		unsigned long long int ulli;
		float f;
		double d;
		long double ld;
		char * st;		
	} u;
	void * a;	//ARRAY , ...
};

typedef struct KATI KATI;

typedef struct variant{
	datatypes    dt;		
	KATI 	     data;	//start location of data in memory	
	unsigned     int size;	//	for string or array type
	int			 set;   //initilized of not
	//int			 inited;// space created at first assignment
	int          IP; // IP addr for functions
	struct variant * ref; //for assignment operation
	int 		 offset;	
	int 		 isArray;
} variant;

typedef struct {
    VARNAME name[128];
    int     ix; //ix on call stack
} variable;

variant  *  values[MAX_VAR]; // global variables pool

int     	var_counter=0;
int         fvar_counter=0;
int         inFunction=0;

variable   	vars[MAX_VAR];	// global variable names
variable    fvars[MAX_VAR]; // variables inside function

void init_var(variant * v, datatypes dt, int size) ;
void realloc_var(variant * , int);
#define alloc_var(v) realloc_var((v), 0)


void set_var_ld( variant *v , long double value);
//void set_var_st( variant *v , char * value) ;

//TODONE:  convert variable name to int at compile time and use number at runtime
//TODONE:  diffrent function for runtime error and compile time error

//TODO: can we use void * instead of variant * ?
struct timeval te;
variant  * getVar(int var) {
     // if (debug) printf("var(get)=%d %f\n",var, vars[var]);
     //todo: check local and global variable
	if (var == ZAMAN) {
		gettimeofday(&te, NULL);
		set_var_ld( values[ZAMAN], (long double ) (te.tv_sec*1000LL + te.tv_usec/1000));
		//printf("\n[ %Lf ]", _clock_);
	} 
	return values[var];
}

void setVar(int var, variant  val) {
   // printf("\n----var=%d val=%Lf\n",var,LDVALUE(val));
	*(values[var]) = val;	
}

#define set_var	set_var_ld

unsigned char valueof_uc(variant * v) {
	if (v->dt==CHAR) return v->data.u.c;
	if (v->dt== UCHAR) return v->data.u.uc ;
	if (v->dt== INT) return v->data.u.i; ;
	if (v->dt== UINT) return v->data.u.ui; ;
	if (v->dt== LINT) return v->data.u.li; ;			
	if (v->dt== ULINT) return v->data.u.uli; ;
	if (v->dt== LLINT) return v->data.u.lli; ;			
	if (v->dt== ULLINT) return v->data.u.ulli;
	if (v->dt== FLOAT) return v->data.u.f ;									
	if (v->dt== DOUBLE) return v->data.u.d ;
	if (v->dt== LDOUBLE) return v->data.u.ld ;				
	return 0;
}

int valueof_i(variant * v) {
	if (v->dt==CHAR) return v->data.u.c;
	if (v->dt== UCHAR) return v->data.u.uc ;
	if (v->dt== INT) return v->data.u.i; ;
	if (v->dt== UINT) return v->data.u.ui; ;
	if (v->dt== LINT) return v->data.u.li; ;			
	if (v->dt== ULINT) return v->data.u.uli; ;
	if (v->dt== LLINT) return v->data.u.lli; ;			
	if (v->dt== ULLINT) return v->data.u.ulli;
	if (v->dt== FLOAT) return v->data.u.f ;									
	if (v->dt== DOUBLE) return v->data.u.d ;
	if (v->dt== LDOUBLE) return v->data.u.ld ;				
	return 0;
}

unsigned int valueof_ui(variant * v) {
	if (v->dt==CHAR) return v->data.u.c;
	if (v->dt== UCHAR) return v->data.u.uc ;
	if (v->dt== INT) return v->data.u.i; ;
	if (v->dt== UINT) return v->data.u.ui; ;
	if (v->dt== LINT) return v->data.u.li; ;			
	if (v->dt== ULINT) return v->data.u.uli; ;
	if (v->dt== LLINT) return v->data.u.lli; ;			
	if (v->dt== ULLINT) return v->data.u.ulli;
	if (v->dt== FLOAT) return v->data.u.f ;									
	if (v->dt== DOUBLE) return v->data.u.d ;
	if (v->dt== LDOUBLE) return v->data.u.ld ;				
	return 0;
}

long int valueof_li(variant * v) {
	if (v->dt==CHAR) return v->data.u.c;
	if (v->dt== UCHAR) return v->data.u.uc ;
	if (v->dt== INT) return v->data.u.i; ;
	if (v->dt== UINT) return v->data.u.ui; ;
	if (v->dt== LINT) return v->data.u.li; ;			
	if (v->dt== ULINT) return v->data.u.uli; ;
	if (v->dt== LLINT) return v->data.u.lli; ;			
	if (v->dt== ULLINT) return v->data.u.ulli;
	if (v->dt== FLOAT) return v->data.u.f ;									
	if (v->dt== DOUBLE) return v->data.u.d ;
	if (v->dt== LDOUBLE) return v->data.u.ld ;				
	return 0;
}

unsigned long int valueof_uli(variant * v) {
	if (v->dt==CHAR) return v->data.u.c;
	if (v->dt== UCHAR) return v->data.u.uc ;
	if (v->dt== INT) return v->data.u.i; ;
	if (v->dt== UINT) return v->data.u.ui; ;
	if (v->dt== LINT) return v->data.u.li; ;			
	if (v->dt== ULINT) return v->data.u.uli; ;
	if (v->dt== LLINT) return v->data.u.lli; ;			
	if (v->dt== ULLINT) return v->data.u.ulli;
	if (v->dt== FLOAT) return v->data.u.f ;									
	if (v->dt== DOUBLE) return v->data.u.d ;
	if (v->dt== LDOUBLE) return v->data.u.ld ;				
	return 0;
}


long long int valueof_lli(variant * v) {
	if (v->dt==CHAR) return v->data.u.c;
	if (v->dt== UCHAR) return v->data.u.uc ;
	if (v->dt== INT) return v->data.u.i; ;
	if (v->dt== UINT) return v->data.u.ui; ;
	if (v->dt== LINT) return v->data.u.li; ;			
	if (v->dt== ULINT) return v->data.u.uli; ;
	if (v->dt== LLINT) return v->data.u.lli; ;			
	if (v->dt== ULLINT) return v->data.u.ulli;
	if (v->dt== FLOAT) return v->data.u.f ;									
	if (v->dt== DOUBLE) return v->data.u.d ;
	if (v->dt== LDOUBLE) return v->data.u.ld ;				
	return 0;
}

unsigned long long int valueof_ulli(variant * v) {
	if (v->dt==CHAR) return v->data.u.c;
	if (v->dt== UCHAR) return v->data.u.uc ;
	if (v->dt== INT) return v->data.u.i; ;
	if (v->dt== UINT) return v->data.u.ui; ;
	if (v->dt== LINT) return v->data.u.li; ;			
	if (v->dt== ULINT) return v->data.u.uli; ;
	if (v->dt== LLINT) return v->data.u.lli; ;			
	if (v->dt== ULLINT) return v->data.u.ulli;
	if (v->dt== FLOAT) return v->data.u.f ;									
	if (v->dt== DOUBLE) return v->data.u.d ;
	if (v->dt== LDOUBLE) return v->data.u.ld ;				
	return 0;
}

float valueof_f(variant * v) {
	if (v->dt==CHAR) return v->data.u.c;
	if (v->dt== UCHAR) return v->data.u.uc ;
	if (v->dt== INT) return v->data.u.i; ;
	if (v->dt== UINT) return v->data.u.ui; ;
	if (v->dt== LINT) return v->data.u.li; ;			
	if (v->dt== ULINT) return v->data.u.uli; ;
	if (v->dt== LLINT) return v->data.u.lli; ;			
	if (v->dt== ULLINT) return v->data.u.ulli;
	if (v->dt== FLOAT) return v->data.u.f ;									
	if (v->dt== DOUBLE) return v->data.u.d ;
	if (v->dt== LDOUBLE) return v->data.u.ld ;				
	return 0;
}

double valueof_d(variant * v) {
	if (v->dt==CHAR) return v->data.u.c;
	if (v->dt== UCHAR) return v->data.u.uc ;
	if (v->dt== INT) return v->data.u.i; ;
	if (v->dt== UINT) return v->data.u.ui; ;
	if (v->dt== LINT) return v->data.u.li; ;			
	if (v->dt== ULINT) return v->data.u.uli; ;
	if (v->dt== LLINT) return v->data.u.lli; ;			
	if (v->dt== ULLINT) return v->data.u.ulli;
	if (v->dt== FLOAT) return v->data.u.f ;									
	if (v->dt== DOUBLE) return v->data.u.d ;
	if (v->dt== LDOUBLE) return v->data.u.ld ;				
	return 0;
}

long double valueof_ld(variant * v) {
	if (v->dt==CHAR) return v->data.u.c;
	if (v->dt== UCHAR) return v->data.u.uc ;
	if (v->dt== INT) return v->data.u.i; ;
	if (v->dt== UINT) return v->data.u.ui; ;
	if (v->dt== LINT) return v->data.u.li; ;			
	if (v->dt== ULINT) return v->data.u.uli; ;
	if (v->dt== LLINT) return v->data.u.lli; ;			
	if (v->dt== ULLINT) return v->data.u.ulli;
	if (v->dt== FLOAT) return v->data.u.f ;									
	if (v->dt== DOUBLE) return v->data.u.d ;
	if (v->dt== LDOUBLE) return v->data.u.ld ;				
	return 0;
}

void set_var_c( variant *v , char value) {
//	if (!v->data) alloc_var(v);
	v->data.u.c = value;	
	v->set=1;	
}


void set_var_i( variant *v , int value) {
//	if (!v->data) alloc_var(v);
	v->data.u.i = value;	
	v->set=1;	
}

void set_var_li( variant *v , long int value) {
//	if (!v->data) alloc_var(v);
	v->data.u.li = value;	
	v->set=1;	
}

void set_var_lli( variant *v , long long int value) {
//	if (!v->data) alloc_var(v);
	v->data.u.lli = value;	
	v->set=1;	
}

void set_var_f( variant *v , float value) {
//	if (!v->data) alloc_var(v);
	v->data.u.f = value;	
	v->set=1;	
}


void set_var_d( variant *v , double value) {
//	if (!v->data) alloc_var(v);
	v->data.u.d = value;		
	v->set=1;	
}

void set_var_ld( variant *v , long double value) {
//	if (!v->data) alloc_var(v);
	v->data.u.ld = value;		
	v->set=1;	
}

/*
void set_var_st( variant *v , char * value) {
//	if (!v->data) alloc_var(v);

	v->data= (void *) value;
//TODO: v->size= ?
	v->dt=TEXT;
	v->set=1;
}*/

/*
void set_var_ui( variant *v , unsigned int value) {
//	(v->value.ui)=value;
	v->dt=UINT;
	v->set=1;
}
*/

void realloc_var(variant *v, int force) {
	if (v->size ==0 ) {
		printf("data type=%d\n", v->dt);
		_error(1,"تعداد عناصر برابر صفر است.");
	}
	//if ( v->isArray ) printf("crating array with size=%d and type=%d FORCE=%d\n", v->size, v->dt, force);	
	if (!force && v->data.a) return ;	
//	if (v->dt==TEXT) 
		//printf("size=%d\n", v->size);
	//TODO what about previous memory
	if ( v->isArray ) {	// this is array
		v->data.a =  malloc (v->size * _sizeof[v->dt]);	
		//printf("**crated\n", v->size, v->dt);		
	}
}


void init_var(variant * v, datatypes dt, int size) {
	v->dt= dt;
	v->set = 0;
	v->IP  = -1;	
	v->size=size;
	v->isArray = (size > 1);
	v->data.a=NULL;
}

variant * create_var(datatypes dt, int size) {
	variant *v=(variant * ) malloc(sizeof(variant ));
	if (!v) _error(1,"خطای کمبود حافظه.");	
	//printf("cv size==%d\n", size);
	init_var(v, dt, size);
	alloc_var(v);
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

int _check(VARNAME * var, datatypes dt, int size) {
	int i;
//	char err[100];
	int *vc=(inFunction) ? &fvar_counter: &var_counter;
	//printf("\n--inFunction=%d, checking %s size=%d ", inFunction, var, size);
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

	if (!inFunction) {
	//	printf("***_check dt=%d size=%d\n", dt, size);
	    values[var_counter]= create_var( dt, size);
    }
	
	if (inFunction) fvars[fvar_counter].ix=-1;  else vars[var_counter].ix=-1;
	
	strcpy( inFunction ? fvars[fvar_counter].name: vars[var_counter].name , var);
	
	//set_var call at first assignment
	//printf("%d", var_counter);
	(*vc)++;
	return (*vc)-1;	
}

int check(VARNAME * var) {
	return _check(var, DEFAULT_DATA_TYPE , 1); // default data type is INT
}

int _recheck(VARNAME * var, datatypes dt, int size) {
	int i=_check(var,dt,size);
	//printf("***recheck dt=%d size=%d\n", dt, size);
	if (!inFunction) {
	    values[i]= create_var( dt, size);
    }
    return i;
}

int iszero(variant *v) {
	if (v->dt==INT) return (v->data.u.i==0);		
	if (v->dt==LDOUBLE) return (v->data.u.ld==0.0);
	if (v->dt==INT) return (v->data.u.i==0);			
	return 0;
}

struct context {
  	int    counter;
 	struct token  * end;
 	struct token  * start;
};

struct context _main;
#endif

