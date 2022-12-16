/*
Author: Steve Chan
Email : steve_chan@live.com.sg
*/

#include <stdio.h>
#include <ctype.h> 
int getch(void); 
void ungetch(int); 

/*
Getint: get next integer from input into *pn
*/
int getint(int *pn){
    int c, sign; 

    while(isspace(c = getch())); 
    if(!isdigit(c) && c!=EOF && c != '+' && c!='-'){
        ungetch(c);
        return 0; 
    }
    sign = (c=='-')?-1:1; 
    if(c=='+'|| c== '-')
        c=getch(); //continue to get more chars
    for(*pn=0;isdigit(c);c=getch())
        *pn =10 * *pn +(c-'0');
    *pn *= sign; 
    if(c!=EOF)
        ungetch(c);
    return c;

}

int main(){
    int pn; 
    getint(&pn); 
   
    return 0;
}