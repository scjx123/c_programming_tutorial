/*
Author: Steve Chan
Email : steve_chan@live.com.sg
*/

#include <stdio.h>

#define square(x) x*x
#define square1(x) (x)*(x) 

#undef getchar
int getchar(void){/*...*/} 

#define dprint(expr) printf(#expr " = %g\n",expr) 

#define paster(n) printf_s("token" #n "= %d\n",token##n)
int  token9=10;

#define swap(t,x,y) {t _z;\
_z = x;\
x=y;\
y=_z; }

int main(){
    int x = 5; 
    int y = 2; 
    /*
    Parenthesis matters in Defines 
    */
    printf("%d\n",square(x+3)); 
    printf("%d\n",square1(x+3)); 

    /*
    #undef ensures that getchar is not a define but a funciton
    */
    getchar();

    /*
    Formal parameters in Defines
    Add in # in the replacement text, the combination will be expanded into a quoted
    string with the parameter replaced by the atual argument. 
    */
    dprint(x/y);

    
    /*
    Operator ## provides a way to concatenate actual arguments during macro expansion. 
    IF a parameter in te replacement text is adjacent to a ##, the parameter is replaced
    by the actual argument. 
    */
    paster(9);

    int a,b; 
    a='a'; 
    b='b'; 
    printf("x = %c \t y= %c\n",a,b); 
    swap(char,a,b);
    printf("x = %c \t y= %c\n",a,b); 

    return 0;
    
    
}