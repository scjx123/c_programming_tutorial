#include <stdio.h>
#include <stdlib.h> /* for atof() */
#define MAXOP 100 /* max size of operand or operator */
#define NUMBER '0' /* signal that a number was found */
int getop(char []);
void push(double);
double pop(void);

/*
implement a stack in c
*/
#define MAXVAL 100

int sp =0;  //points to nextfree space on val
double val[MAXVAL]; 

/*
Push number onto the stack
*/
void push(double f){
	if(sp<MAXVAL){
		val[sp++]=f; 
	}else{
		printf("error: stack full, can't push %g\n",f);
	}
}

/*
Pop number from stack 
*/
double pop(void){
	if(sp>0){
		return val[--sp]; 
	}else{
		printf("error: stack empty\n"); 
		return 0.0; 
	}
}

int getch(void);
void ungetch(int);
/* getop: get next character or numeric operand */
int getop(char s[])
{
	int i, c;
	while ((s[0] = c = getch()) == ' ' || c == '\t')
	;

	s[1] = '\0';
	if (!isdigit(c) && c != '.')
		return c; /* not a number */
	i = 0;
	if (isdigit(c)) /* collect integer part */
		while (isdigit(s[++i] = c = getch()))
		;
	if (c == '.') /* collect fraction part */
		while (isdigit(s[++i] = c = getch()))
		;
	s[i] = '\0';
	if (c != EOF)
		ungetch(c);
	return NUMBER;
}

#include <math.h> 
/* reverse Polish calculator */
main()
{
	int type;
	double op2;
	char s[MAXOP];
	while ((type = getop(s)) != EOF) {
		switch (type) {
			case NUMBER:
				push(atof(s));
				break;
			case '+':
				push(pop() + pop());
				break;
			case '*':
				push(pop() * pop());
				break;
			case '-':
				op2 = pop();
				push(pop() - op2);
				break;
			case '/':
				op2 = pop();
				if (op2 != 0.0)
					push(pop() / op2);
				else
					printf("error: zero divisor\n");
				break;
			case '%':
				op2 = pop();
				push(fmod(pop(), op2));
				break;
			case '\n':
				printf("\t%.8g\n", pop());
				break;
			default:
				printf("error: unknown command %s\n", s);
				break;
		}
	}
	return 0;
}
