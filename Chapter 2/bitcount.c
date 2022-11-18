/*
Author: Steve Chan
Email : steve_chan@live.com.sg
*/

#include <stdio.h>

/*
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
  
}