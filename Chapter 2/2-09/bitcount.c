/*
Author: Steve Chan
Email : steve_chan@live.com.sg
*/

#include <stdio.h>
#include <time.h> 
/*
In a two's complement number system, x &= (x-1) deletes the rightmost 
1-bit in x. Explain why. 
what is 2's complement number system? 
- It is the way that all computer represent integer.

x = x & (x-1), it deletes the right most 1-bit in x 
  1011 = 11
& 1010
------------
  1010
  
Use this observation to write a faster version of bitcount.

function bitcount counts the number of 1-bits in 
its integer argument
*/
int bitcount(unsigned x){
    int b; 
    for(b = 0; x != 0; x >>= 1)
        if(x & 01)
            b++; 
    return b; 
}


main(){
    clock_t start, end;
    start = clock();
    
    printf("%d\n",bitcount(11));


    int n=-1; 
    float f = 20.0F; 
    
    printf("%d\n",sizeof((n >0 ? f:n))); 

    end = clock();
    double time_taken = (double)(end - start) / (double)(CLOCKS_PER_SEC);
    printf("%lf\n",time_taken); 
}