#include <stdio.h> 

/*
* Write a function setbits(x,p,n,y) that returns x with the n bits that begin at
* position p set to the rightmost n bits of y, leaving the other bits unchanged
* Test Case 1: setbits(11010001,4,3,10001111) -> 11011111 
*/
int setbits(int x, int p, int n, int y){
    /*Extract the right most n bits of y*/
    return x | ((y & ~(~0 << n))<< (p+1 -n)); 

    /*Find a way to add it into x*/
    

    // return (x >>(p+1 - n) & ~(~0 << n));
}
main(){
    printf("%d\n",setbits(0b11010001,4,3,0b10001111));
}