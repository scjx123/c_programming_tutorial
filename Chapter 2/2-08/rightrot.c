/*
Author 
*/

#include <stdio.h> 

/*
* Write a function invert(x,p,n) that returns x with the n bits that begin at
position p inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged.

Test Case 1: (10110101, 4, 3) -> 10101001
Test Case 2: (10000000, 4, 3) -> 10011100
Test Case 3: (10000001, 1, 3) -> 10000001   
*/
int invert(int x, int p, int n){
    /*
    10110101 (original)
    00011100 (mask)
    10101001 (orignal ^ mask)
    */
   int mask; 
   //create mask 
   //        1<< p   // 1000 
   //        ~(1<<p) // 0111 
    mask = (~(1<<p))<< (p+1-n); //011100
    
    return x^mask; 
}

main(){
    printf("0x%x\n",invert(0b10110101,4,3)); 
}