#include <stdio.h> 

/*
* getbits(x,4,3) returns the three bits in positions 
* 4,3 and 2 right adjusted
* param 1: bits
* param 2: bits position
* param 3: how many bits 
* Test Case 1: getbits (11010010, 4,3) -> 100
*/
unsigned getbits(unsigned x, int p, int n){
    return x >>(p+1 - n) & ~(~0 << n); 
}
main(){
    printf("%d\n",getbits(11010010,4,3));
}