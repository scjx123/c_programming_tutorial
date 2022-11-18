#include <stdio.h>

/*
* Basicalyl, bit manipulation involves isolation and extraction.
* to do Isolation of n bits from p position, we do x << (p+1 -n)
* to do Extraction of n bits, we '&'(read) from ~(~0 << n)
*/

unsigned getbits(unsigned x,int p, int n){
    return (x>>(p+1-n))&~(~0 << n); 
}

unsigned setbits(unsigned x,int p, int n, int y){
    return (x>>(p+1-n))&~(~0 << n) | y; 
}

unsigned invert(unsigned x,int p,int n){
    return ~(x>>(p+1-n)&~(~0<<n));
}

unsigned rightrot(unsigned x, int n){
    return (((x&~(~0<<n))<<n-1) | (x>>n));
}

int main(void){
    int x=0b10011;
    int y=0b10111000; 
    // printf("%d\n",setbits(x,4,3,y)); 
     printf("%d\n",rightrot(x,3));     
}