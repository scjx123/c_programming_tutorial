# Chapter 3 Notes 
## 3.2 if-else 
Because if-else is optional, we associate each 'else' with the closest previous else-less if. 

`
 if(n>0)  
if(a>b)  
  z=a;  
 else  
  z=b;  
`

## 3.3 Else-If 
## 3.5 While and For
```
while(expression)  
statement  
```

if *expression* is evaluated to be non-zero, statement is executed and expression is re-evaluated. until expression becomes zero/false. 

```
for (Expr1;Expr2;Expr3)  
statement  
```

is equivalent to  
```
expr1;
while(expr2){expr3}
```  
except for the behaviour of `continue`

In a for statement, it is possible to run 2 parallel indices!
```
/*reverse: reverse string s in place */ 
void reverse(char s[]){
    int c,i,j;
    for (i = 0, j = strlen(s)-1; i < j; i++, j--){
        c = s[i]; 
        s[i] = s[j];
        s[j] = c;
    }
}
```  
commas should be use sparingly, the most suitable uses are for constructs strongly related to each other, as in the For loop in reverse example, and in MACROS where a multistep computation has to be a single expression. A comma expression might also be appropriate for the exchange of elements in reverse, where the exchange can be though of a single operation eg: 

```
 for (i=0,j=strlen(s)-1;i<j;i++,j--)
    c=s[i],s[i]=s[j],s[j]=c;  
```

## Do While
the while and for loops test the termiation condition at the top. By contrast, the *do-while* loop tests the at the bottom after making each pass through the loop body; the body is always executed at least once. 

```
do
    -statement
while (expression); 
```
Statement is executed once, then expression is evaluated. If it is true, statement is executed again, and so on. When the expression becomes false, the loop terminates.

## Break and continue

the continue statement is ralted to break, but less often used; it skips the current iteration and continues to the next iteration. in the for loop, control passes to the increment step. The ocntinue statement applies only to loops, not to switch. A continue inside a switch inside a loop causes the next loop iteration. 

## Goto and Labels
The most common use of *goto* is to abandon processing in some deeply nested structure, such as breaking out of 2 or more loops at once. The break statement cannot be used directly since it only exits from the innermost loop. Thus: 

```
for(...)
    for(...){
        if(disaster)
            goto error; 
    }

error:
    /*clean up the mess*/
```

This orgranization is handy if the error handling code is non-trivial, and if errors can occur in several places. 
A label 


# Chapter 4 - Functions and Programs Structure

## External variables
External variables are defined outside any functions 
Functions themselves are always external because C does not allow funtions to be defined inside other functions. 
By default extenrnal variables and ufnctions have the property that all references to them by the smae name even from functions ompilerd separately. are references to the same thing. This standard calls this property external linkage.

External variables are also useful because of their greater scope and lifetime. Automatic variables are internal to a funciton, they come into existence when the funciton is enter and disapper when it is left. 

IF 2 functions must share some data, yet neither calls the other, it is most convenient if the shared data is kept in extenrla variables rather than being passed in and our via arguments. 

## Scope Rules
The functions and external variables that make up a C program need not all be compiled at  the same time; 
Questions of Interest   
- how are declarations written so that variables are properly declared during comilation
- How are declarations arranged so that all the pieces will be properly connected when the program is loaded? 
- How are external variables initialized? 

## Static Variables
Variables meant for private use in the same source file, but can be applied *static* keyword. It limits the the scope of that object to the rest of the source file being compiled. 

Static variables can be applied to internal variables as well. Recall that internal variables means variables appearing inside a funciton, while external variables means variables appearing outside functions and is global. 
> Internal static variables are local to a particular functions just as automatic variables are, but unlike automatics, they remain in existence rather than coming and going each time the funciton is activated. This means that internal static variables provide private, permanent storage within a single function. 



## Register Variables
A *register* declaraction advises the compiler that the variable in questions will be heavily used, and the idea is that register variables are to be placed in a machine registers, which may result in smaller and faster programs. But compilers are free to ignore the advice. 

```
register int x; 
register char c;

func(regiser unsigned m, regiser long n){
    register int i; 
}
```
In practice, there are restrictions on register variables, reflection the realities of underlying hardware. 

## Recursion
How to write recursion:  
write out possible states of the arguments,
and have a blocking statement, before   printing. (see 4-10 )

Recursion may provide no savingi n storage, since somwhere a stack of values being processed must be maintianed. Nor will it be faster. But the code is more ompact, and oftem much easier to write and understand than non-recursive equivalent. 

Recursion is especially convenient for recursively defined data structures like trees. 

## C preprocessor

Difference between *#include "filename* and *#include \<filename\>*  
if filename is quoted, searching for the file typically begins where the source program was found; if it is not found there or if the name is enclosed in < and >, searching follows an implementation-defined rule to find the file. An included file may itself contain *#include* lines. 

### Macro substituition
You can do 

```
#define forever for(;;)
```
A long definition of macro may be continued over several lines using '\' 
The scope of a name defined with #define is from its point of definition to the ned of the soruce file being compiled. 

BECAREFUL

```
#define square(x)  x*x 
#define square(x) (x)*(x)
main(void){
    int x=5; 
    printf("%d\n",square(x+3)); //output 23
    printf("%d\n",square(x+3)); //output 64 
}
```
therefore parenthesis matters!


