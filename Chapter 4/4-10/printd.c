/*
Author: Steve Chan
Email : steve_chan@live.com.sg
*/

#include <stdio.h>

/*
Printing a number as character string
*/
void printd(int n){
    if(n<0){
        putchar('-');
        n=-n; 
    }
    if (n/10)printd(n/10); //blocking statment
    putchar (n % 10 + '0'); 
}


int main(){
    int x = 1235; 

    printd(x);
    return 0;
}