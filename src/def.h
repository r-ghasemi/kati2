#ifndef __DEF_H
#define __DEF_H

#include <math.h>
#include <ctype.h>
#include <time.h>

#ifdef  _WIN32
	#define printf __mingw_printf
#endif

#define _error(a,b) error((b),(a))

#define		FRMT		" %Lf "
#define		SFORMAT	"%Lf"
#define 	DIGITFRMT	"\nDIGIT: %Lf\n"

// predefined ids
#define	DOT		0/* "." */		
#define	AZ		1/* "از" */	 
#define	DAR		2/* "در" */
#define	RA		3/* "را" */
#define	VA		4/* "و" */
#define	BA		5/* "با" */
#define	TA		6/* "تا" */
#define	ZAKHIREH	7/* "ذخیره" */
#define	KON		8/* "کن" */
#define	TEKRAR	9/* "تکرار" */
#define	TEKRARKON	10/* "تکرارکن" */
#define	AFZAYESH	11/* "افزایش" */
#define	KAHESH	12/* "کاهش" */
#define	BEDEH		13/* "بده" */
#define	BAR		14/* "بر" */
#define	BEKHAN	15/* "بخوان" */
#define	BENVIS	16/* "بنویس" */
#define	VORODI	17/* "ورودی" */
#define	KHOROJI	18/* "خروجی" */
#define	ZAMAN		19/* "زمان" */

#define	K_BEGIN		20/* "شروع" */
#define	K_END			21/* "پایان" */
#define	K_IF			22/* "اگر" */
#define	K_NEWLINE		23/* "سرخط" */
#define	K_TEDAD		24/* "تعداد" */
#define	K_THEN1		25/* "آنگاه" */
#define	K_THEN2		26/* "انگاه" */

#define	ELSE			27/* "وگرنه" */
#define	TIMES			28/* "بار" */
#define	HAS			29/* "دارد" */
#define	MARTABEH		30/* "مرتبه" */

#define	UNSIGNED		31/* "نامنفی" */
#define	MOZAAF		32/* "مضاعف" */

#define	K_CONTINUE		33/* "ادامه" */
#define	K_BREAK		34/* "توقف" */

#define	K_FUNC		35/* "تابع" */
#define	K_RET		36/* "بازگشت" */
#define	K_CALL		37/* "فراخوان" */
#define	K_FARMAN	38/* "فرمان" */
#define	K_ROOT		39/* "ریشه" */
#define	K_POWER		40/* "توان" */
#define HAM			41/*هم*/
#define YA			42/*یا*/
#define K_VAR		43/*متغییر*/
/*
#define CHAR		44
#define INT			45
#define UINT		46
#define LONG		47
#define ULONG		48
#define LLONG		48	
#define ULLONG		50
#define FLOAT		51
#define DOUBLE		52
#define LDOUBLE		53
#define STRING		54
#define BOOLEAN		55
*/
#define MAXKEYS     43 // = last value in kewords

char msg[256];

void	 	error(char *, int );

int 		debug=0;
int 		asmm=0;
	
#define	LT		231
#define	GT		232
#define	LTE		233
#define	GTE		234
#define	EQ		235
#define	NE		236
#define	IS		237
#define	EVAL	238
#define	NOT		239
#define	CORRECT	240
#define	DIVN	241
#define	DIV2	'@'
#define	DIV3	242
#define	DIV4	243
#define	DIV5	244

#define	MIRROR	245
#define	SQRT	246
#define	FMT		247  // or :
#define	SUB		248
#define	ADD		249
#define	INCR		250
#define	DECR		251

#define	MOD		'%'
#define	MULT	'*'
#define	DIV		'/'

#define	V_INTEGER	240 /*= CORRECT*/
#define	V_FLOAT	252
#define	V_ARRAY	253
#define	V_RECORD	254
#define	SQR2		255
#define	SQR3		256
#define	FARMAN		257
#define	ROOT		258
#define	POWER		259
#define	NOT2		260
#define	OR			261
#define AND			262
#define FUNCTION	263
#define	ARRAY		264
#define COMMA		265



#include "variant.h"

enum command 
		{NOP, LET, PRINT, READ, WRITE, DATA, IF, IFE, FOR, WHILE, WHILEE, DO, END, GOTO, BEGIN, NEWLINE, CHAS, BREAK, CONTINUE, FUNC, CALL, RET};

char commandStr[][10]={
"NOP","LET","PRINT","READ","WRITE","DATA",
"IF","IFE","FOR","WHILE","WHILEE","DO","END","GOTO",
"BEGIN","NEWLINE","CHAS","BREAK","CONTINUE",
"FUNC", "CALL","RET"
};

struct tokenval {
	long int value;
	char  str[60];	
};

/*
struct tokenval  types[] = {
	{CHAR,"کاراکتری"},
	{INT,"صحیح"},
//	{UINT,""},
//	{LONG,""},
//	{ULONG,""},
//	{LLONG,""},
//	{ULLONG,""},
	{FLOAT,"حقیقی"},
	{DOUBLE,"اعشاری"},
//	{LDOUBLE,""},
	{STRING,"رشته"},
	{BOOLEAN,"بولی"},
	{0,""},
							
};*/

struct tokenval  operators[] = {
{COMMA,"و"},
{'*' ,"ضرب"},{'*' ,"ضربدر"}, 
{ADD, "جمع"},{ADD, "بعلاوه"},
{SUB,"منها"}, {SUB,"منهای"},
{DIV,"تقسیم"},{MOD,"باقیمانده"},{DIV2,"نصف"},{FMT,"دقت"},{FMT,"قالب"},{EQ,"مساوی"}
,{NE,"مخالف"}
,{EQ,"برابر"}
,{EQ,"برابربا"}
,{GT,"بزرگتراز"}
,{GT,"بیشتراز"}
,{LT,"کوچکتر"}
,{LT,"کوچکتراز"}
,{LT,"کمتر"},
{LT,"کمتراز"},
{GTE,"بزرگترمساوی"},{GTE,"بیشترمساوی"},{LTE,"کمترمساوی"},{LTE,"کوچکترمساوی"},{EVAL,"حاصل"},{EVAL,"مقدار"},{IS,"است"},{IS,"باشد"},{IS,"بود"}
,{NOT,"نیست"},{NOT,"نباشد"},{NOT,"نبود"},{NOT2,"نقیض"}
,{'=',"قراربده"},{CORRECT,"صحیح"},{DIVN,"معکوس"},{DIV3,"ثلث"},{DIV4,"ربع"},{DIV5,"خمس"},{MIRROR,"منفی"},{MIRROR,"قرینه"},{SQRT,"جذر"},{SQR2,"مربع"},{SQR3,"مکعب"},{FARMAN,"فرمان"},{FARMAN,"دستور"},{ROOT,"ریشه"},{POWER,"توان"}
,{AND,"وو"}
,{OR,"یا"}
,{0,""}
};

int precedence(unsigned int op) {
	if (op==0 || op=='(') return 0;
	if (op==COMMA) return 1;		
	if (op==FMT) return 2;				
	if (op==EQ || op==GT || op==LT || op==GTE || op==LTE) return 3;	
	if (op==OR || op=='+' || op=='-' || op==ADD || op==SUB) return 4;
	if (op==AND || op=='*' || op==DIV || op==MOD) return 5;	
	if (op==DIV2) return 6;
	if (op==FUNCTION) return 7;	
	return 8;	
}

struct tokenval numbers[] = {
{0.0,"صفر"},{1.0,"یک"},{2,"دو"},{30,"سه"},{1.0,"اول"},{2.0,"دوم"},{30,"سوم"},{4.0,"چهار"},{5.0,"پنج"},{6.0,"شش"},{7.0,"هفت"},{8.0,"هشت"},{9.0,"نه"},{10.0,"ده"},{11.0,"یازده"},{12.0,"دوازده"},{13.0,"سیزده"},{14.0,"چهارده"},{15.0,"پانزده"},{16.0,"شانزده"},{17.0,"هفده"},{18.0,"هجده"},{19.0,"نوزده"},{20.0,"بیست"},{30.0,"سی"},{40.0,"چهل"},{50.0,"پنجاه"},{60.0,"شصت"},{70.0,"هفتاد"},{80.0,"هشتاد"},{90.0,"نود"},{100.0,"صد"},{1000.0,"هزار"},{1000000.0,"میلیون"},{1000000000.0,"میلیارد"},{0,"END"}
};

struct  node {
	enum command cmd;
	int counter;
	struct node * self;

	char * postfix;

	struct token *  start; //expresion start
	struct token *  end;   //expresion end
	
	int arg_count; //number of args
	int var_count; //number of local variables+args

	int  next;
	int  link; 
};

int  _ip=0;  //instruction pointer : 
void run(int ip, int bp) ; // kati2.c

int  counter=0;


// after 15000 is reserved for compiler code
struct  node nodes[10000];

int labels[1000];
int line=1;

int  last_head;
int last_line=1;

int  head=0;
int code_size=0;
unsigned char code[65536];

//while counters
int  rep=0;
int  scope=0;

int  loop_stack[500];
int  loop_top=-1;


enum token_types {EOS, DIGIT, ID, OP, STRING, KEYWORD};

struct token{
  enum    token_types type;
  int	    id;
  int       tok_ip; // instruction pointer
  int       tok_ix; // ix on stack when calling
  int	    neg;

  struct {
	char      tok[128];
	variant   val;
	unsigned  int op;	
  } u;
  struct token  * next;
} token;

struct token * add_token(struct context * c, struct token t) {
	struct token * tmp=(struct token *) malloc(sizeof(struct token));
	
	*tmp=t;
	tmp->next=NULL;
	tmp->neg=0;

	/*if (tmp->type==ID) 
		printf("\n--Adding:[%d] %s",c->counter, tmp->u.tok);
	if (tmp->type==OP) 
		printf("\n--Adding:[%d] [%c][%d]",c->counter, tmp->u.op, tmp->u.op);
	if (tmp->type==STRING) 
		printf("\n--Adding:[%d] |%s|",c->counter, tmp->u.val.value.st);
*/
	
	if (c->start) {
		c->end->next = tmp;
		c->end = tmp;
	} else {
		c->start=c->end=tmp;	
	}

	c->counter ++;
	return tmp;
}

struct token create_token_op( unsigned char op) {
	struct token t;
	t.type=OP;
	t.u.op=op;
	t.neg=0;
	
	return t;
}

struct token create_token_dig_i(int d) {
	struct token t;
	t.type=DIGIT;
	t.neg=0;
	
	init_var(&t.u.val,  INT, 1);
	set_var_i(&t.u.val, d);
	return t;
}


struct token create_token_id(int id) {
	struct token t;
	t.type=ID;
	t.id= id;
	t.neg=0;
	t.tok_ip=-1;
	t.tok_ix=-1;

    if (inFunction) {
//		 printf("\nid=%d ", token.id);
		if (fvars[t.id].ix > 0)
		     t.tok_ix= fvars[t.id].ix;
		 // this token is function arg ix calced in func()
		else 
		    t.tok_ix= t.id - MAXKEYS; 
	}		
	
	return t;
}

void init_context(struct context *c) {	
	c->counter = 0;
	c->start = c->end = add_token(c, create_token_op('#'));
}


void print_string(char *s) {
//	printf("\n--print string");
	int i;
	for (i=0; s[i] ;i++) {
		if (s[i]==13) {
			putc(10,stdout);	
		} 
		putc(s[i],stdout);	
	}
}

void print_var(variant *v) {
}

void error(char *err, int fatal) {
	printf("<div dir='rtl' style='width:100%%'>");
	printf("\nخطا: [خط شماره%d]:%s\n", line, err);	
	unsigned char * s=code+last_head;

	printf("\n ------------------------------ ");
	printf("\n --> ");

	while (*s && isspace(*s)) s++;
	unsigned char * start=s;

	while (*s && s-start < 100) {
		fputc(*s, stdout);
		s++;
	}
	printf("\n------------------------------\n");
	printf("</div>");	

	if (fatal) {		
		longjmp(env_buffer, 1); //throw exception
		return ;
	}
}
void 	runtime(int fatal, char * err) {
	printf("\nخطای زمان اجرا: (IP=%d):%s\n", _ip, err);	
	//unsigned char * s=code+last_head;

	if (fatal) {		
		longjmp(env_buffer, 1); //throw exception
		return ;
	}
}


void log_(struct token tok) {
 if (tok.type==ID) {
    printf("\nID: id=[%3d], name=[%s]\n", tok.id, tok.u.tok);
 } else
 if (tok.type==DIGIT) {
    printf( DIGITFRMT , tok.u.val.data.u.ld );
 } else 
 if (tok.type==OP) {
    printf("\nOP: %c[%d]\n", tok.u.op, tok.u.op);
 } else 
 if (tok.type==STRING) {
  printf("\nSTRING: [%s]\n", tok.u.tok);
 } else
 if (tok.type==KEYWORD) {
  printf("\nKEYWORD: id=[%3d] [%s]\n", tok.id, tok.u.tok);
 }
}


int _flag=0;
int  __getc(int std) {
  return (std) ?  fgetc(stdin): code[head++];
}

unsigned char _ungetc(unsigned char c, int std) {
  //if (std)  ungetc(c,stdin); else code[--head]=c;
  if (!std) {
	  head--;
	  code[head]=c;
  } else   ungetc(c,stdin);
  return c;
}

unsigned char  _getc(int std) {
  unsigned char c= (std) ?  fgetc(stdin): code[head++];
  unsigned char cc;

 /* if ( c==216) { // آ charachter convert to --> ا
		cc= __getc(std);
		if (cc==162) { c=216; cc=167;} 
		_ungetc(cc, std);
  } else*/
  if ( c==217) { // ك charachter convert to --> ک
		cc= __getc(std);
		if (cc==131) { c=218; cc=169;}
		else if (cc==138) { c=219; cc=140;}  //  ي <.... ی
		_ungetc(cc, std);
  } else
  if (c==219) {
		_flag=1;
		cc= __getc(std);

		if (cc>=176 && cc<=185) {
			 cc=cc-176+48; // persiann numbers
			 c=cc;
			 _flag=0;
		}  else {	
			_ungetc(cc, std);
			return c;		
		}
  } 	 
  _flag=0;
  return c;
}

int isalpha2(int c) {
	if (c>='A' && c<='Z') return 1;
	if (c>='a' && c<='z') return 1;
	if (c>=127 && c<=230) return 1;
	return 0;
}

#define 	getToken(i)	_getToken((i),(0))

struct token _getToken(int std, int flag) {
	struct token tok;
	long double z;
	long long int llz=0;
	
    tok.tok_ix=-1;
    tok.tok_ip=-1;
    
	int c;
	int f;
	
	last_head=head;
	last_line=line;
	do {
		do {
			do {
				c= _getc(std);
				if (c==10 && !std) line++;
				if (!c) break;
			} while (isspace(c));

			//checking comments
			if (!c || c!='/') break;
			if (c) {
				unsigned char c2=_getc(std);
				if (c2!='/') { // look ahead for next '/'
					_ungetc(c2,std);
					break;
				}
			}
			// skip comments			
			while (c && c!=10) {
				c=_getc(std);
				if (c==10) line ++;
			}
		} while	(1);
		
		if (debug==5) printf("\n%d[%X]%c\n",c,c,c);
	    
		if (c && (c== '<' || c=='|' || c=='"')) { //string value
		    int eos='|';
		    if (c=='<') eos='>';
		    if (c=='"') eos='"';
		    char * temp;
		    
			tok.type=STRING;
			init_var( &tok.u.val ,TEXT,1);
			alloc_var( &tok.u.val);
			temp = (char *) malloc(1000);
			
			tok.u.val.data.u.st = temp;			


			c=_getc(std);
			f=0;
			while (c && c!=EOF && c!=eos) {
				if (c=='\\') {
					c=__getc(std);
					if (isdigit(c)) {
						unsigned char z=0;
						do {
							z=z*10+c-48;
							c=__getc(std);
						} while (isdigit(c));
						_ungetc(c,std);
						c= z;
					} else
					if (c==216) {
						c=__getc(std);
						if (c==179) c=10;   //س
						else if (c==170) c=9;//ت
						else if (c==168) c=8;//ب
						else _error(1,"استفاده نادرست از بک اسلش.");
					} else{
						if (c=='n') c=13; else
						if (c=='<') c='<'; else
						if (c=='>') c='>'; else
						if (c=='r') c=10; else
						if (c=='b') c=8; else
						if (c=='e') c=27; else
						if (c=='t') c=9; else
						if (c=='\\') c='\\';
						else _error(1,"استفاده نادرست از بک اسلش.");
					} 
				}
				//TODO: string length check here
				temp[f]=c;
				c=_getc(std);
				f++;
			}
			if (!c || c==EOF) _error(1,"انتهای رشته بسته نشده است.");
			 temp[f]=0;		
			// heap[tok.u.val.start+f]=0;			
//			_ungetc(c, std);
			break;
		} else		
		if (c && isdigit(c))  { //DIGIT
			tok.type=DIGIT;
			int isfloat=0;
			z=0.0; llz=0;
			
			while (c!=EOF && isdigit(c)) {				
				z= z*10+c-48;
				llz= llz*10+c-48;
				c=_getc(std);
			}
			if (c=='.') {
			    f=10;
			  // printf("%c %f %d\n",c,z,f);
			     c=_getc(std);
				if (c!=EOF && isdigit(c)) {
			         isfloat=1;
				    while (c && isdigit(c)) {				
				          // printf("%c %f %d\n",c,z,f);
					    z +=(c-48)*1.0/f;					    
					    f*=10;
					    c=_getc(std);
				    }
				} else {
					_ungetc(c,std);
					c='.';
				}
			}		
			datatypes dtype=INT;
//			if (!isfloat &&  (char )llz == llz ) dtype=CHAR;
			if (!isfloat &&  (int ) llz == llz ) dtype=INT;
			//else if (!isfloat &&  (long int )llz == llz ) dtype=LINT;
			else if (!isfloat &&  (long long int )llz == llz ) dtype=LLINT;
			else if ( (float )z == z ) dtype=FLOAT;	
			else if ( (double )z == z ) dtype=DOUBLE;									
			else if ( (long double )z == z ) dtype=LDOUBLE;
			else _error(1,"عدد خارج از محدوده");
						
			init_var( &tok.u.val , dtype, 1 );

			//if (tok.u.val.dt==CHAR)			 set_var_c( &tok.u.val, (char ) z);			
			//else 
			if (tok.u.val.dt==INT)		 set_var_i( &tok.u.val, (int ) z);
			else if (tok.u.val.dt==LINT)	 set_var_li( &tok.u.val, (long int ) z);
			else if (tok.u.val.dt==LLINT)	 set_var_lli( &tok.u.val, (long long int ) z);
			else if (tok.u.val.dt==FLOAT)	 set_var_f( &tok.u.val, (float ) z);
			else if (tok.u.val.dt==DOUBLE)	 set_var_d( &tok.u.val, (double ) z);
			else set_var_ld( &tok.u.val, z);
				
			_ungetc(c, std);
			break;
		} else
		
		if (c && (isalpha2(c)))  { //ID
			tok.type=ID;
			char * temp;
			if (std==1) {
			  tok.type=STRING;
			  init_var( &tok.u.val ,TEXT,1);
			  alloc_var( &tok.u.val);
			  
			  temp = (char *) malloc(1000);
			  tok.u.val.data.u.st=temp;
			}

			f=0;
			while (c && (isalpha2(c) || isdigit(c))) {
				if (std) temp[f]=c;
					else tok.u.tok[f]=c;

				c=_getc(std);

				f++;
			}
			
			if (std) temp[f]=0;
				else tok.u.tok[f]=0;

			_ungetc(c, std);

			int found=0,i;
			//checking for operators
			for (i=0; operators[i].value ; i++) {
				if (!strcmp(operators[i].str, tok.u.tok)) {
					tok.type=OP;
					tok.u.op= (int) operators[i].value;
					found=1;
					break;
				}
			}			
			if (found) break;
			
			//checking for numbers
			for (i=0;  ; i++) {
				if (!strcmp(numbers[i].str,"END")) break;
				//printf("\n%s %Lf", numbers[i].str, numbers[i].value);
				if (!strcmp(numbers[i].str, tok.u.tok)) {
					init_var( &tok.u.val , LINT, 1 );
					set_var_li(&tok.u.val, numbers[i].value);
					tok.type=DIGIT;				
					found=1;
					break;
				}	
			}			
			if (found) break;
			
			if (!strcmp(tok.u.tok, "شمارنده")) {
				tok.type=ID;
				sprintf(tok.u.tok,"rep%d",rep);
				tok.id=check(tok.u.tok);
	 		    
	 		    if (inFunction) {
					 //printf("\nid=%d ix=%d", token.id, fvars[token.id]);
					if (fvars[tok.id].ix > 0)
					 // this token is function argument, ix calced in func.h
					     tok.tok_ix= fvars[tok.id].ix;
					else 
						// other local variables in function
					    tok.tok_ix= tok.id - MAXKEYS; 
				}	
			} else if (
			//!strcmp(tok.u.tok, "بنویس") ||
			//!strcmp(tok.u.tok, "بخوان") ||
			!strcmp(tok.u.tok, "اگر") ||
			!strcmp(tok.u.tok, "آنگاه") ||
			!strcmp(tok.u.tok, "شروع") ||
			!strcmp(tok.u.tok, "پایان") ||
			!strcmp(tok.u.tok, "خروج") ||
			!strcmp(tok.u.tok, "توقف") ||
			!strcmp(tok.u.tok, "ادامه") ||
			!strcmp(tok.u.tok, "سرخط") ||
			!strcmp(tok.u.tok, "تکرار") ||
			!strcmp(tok.u.tok, "تکرارکن") ||
			!strcmp(tok.u.tok, "تابع") ||
			!strcmp(tok.u.tok, "تعداد") ||			
			!strcmp(tok.u.tok, "بازگشت") ||
			!strcmp(tok.u.tok, "از") ||
			!strcmp(tok.u.tok, "فراخوان") ||
			!strcmp(tok.u.tok, "متغییر")
			) {
				tok.type=KEYWORD;
				tok.id=check(tok.u.tok);
			//	printf("\nKEYWORD");
			}  //TODO: check for ARRAY name
			else {    // identifier (variable or function name)
				// todo: check synonyms				
				tok.id = check(tok.u.tok);
				tok.tok_ip=function_ip(tok.u.tok);
				tok.u.op = FUNCTION;
				//printf("\n%s IP =%d", tok.u.tok, tok.tok_ip);
	 		    if (inFunction) {
					 //printf("\nid=%d ix=%d", token.id, fvars[token.id]);
					if (fvars[tok.id].ix > 0)
					     tok.tok_ix= fvars[tok.id].ix;
					 // this token is function arg ix calced in func()
					else 
					    tok.tok_ix= tok.id - MAXKEYS; 
				}			
			}
			break;
		} 	
	
		if (c!=255 && c>0) {	
			if (!flag && c=='-') {
				//lookup for negative number
				last_head=head;
				tok=_getToken(std,1);
				if (tok.type==DIGIT) {
//					printf("NEG t=%d\n", tok.u.val.dt);
					if (tok.u.val.dt== CHAR)  tok.u.val.data.u.c *= -1;
					else if (tok.u.val.dt== INT)  tok.u.val.data.u.i *= -1;
					else if (tok.u.val.dt== LINT)  tok.u.val.data.u.li *= -1;
					else if (tok.u.val.dt== LLINT)  tok.u.val.data.u.lli *= -1;
					else if (tok.u.val.dt== FLOAT)  tok.u.val.data.u.f *= -1;
					else if (tok.u.val.dt== DOUBLE)  tok.u.val.data.u.d *= -1;
					else if (tok.u.val.dt== LDOUBLE) tok.u.val.data.u.ld *= -1;
				} else {
					head=last_head;
					tok.type=OP;
					c=SUB; 
					tok.u.op=c;
				}
			} else {
				tok.type=OP;
				if (c=='+') c=ADD;
				if (c=='-') c=SUB;
				if (c=='/') c=DIV;
				if (c==':') c=FMT;
				if (c=='(') { //convert previous ID to array if is not FUNCTION
					//TODO: convert previous ID to array if is not FUNCTION
				}
				tok.u.op=c;
			}
		} else { // EOS
			tok.type=EOS;			
		}
	} while (0);
	
	if (debug==2 || debug==1) log_(tok);
	return tok;
}


int add_node(struct node *node) {
  node->counter=counter;
  node->self= nodes+counter;
  nodes[counter]= *node;
  counter++;
  return counter;
}

#endif
