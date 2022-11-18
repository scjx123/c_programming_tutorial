#include <stdio.h>
#include <limits.h>
#include <float.h>

#define LINE1 "i am a string" "world"

enum hello {world=1,mars=1};
main(){
    float eps = 1.0e-5; 

    (eps==1.0e-5F)?printf("True"):printf("false");


    printf("%d  %d\n",world,mars); 
    unsigned char mychar = 'c';
    short int myint = 1231231U;
    

    printf("%d\n",myint); 
    printf("%ld\n",myint);


//     printf("signed chars: min %d, max %d \n ",CHAR_MIN,CHAR_MAX);
//     printf("unsigned Chars: max %d \n ",UCHAR_MAX);

//     printf("signed short: min %d, max %d \n ",SHRT_MIN,SHRT_MAX);
//     printf("UNSIGNED short: max %us \n ",USHRT_MAX);

//     printf("signed int: min %d, max %d \n ",INT_MIN,INT_MAX);
//     printf("UNSIGNED int: max %ld \n ",UINT_MAX);

//     printf("signed long: min %d, max %d \n ",LONG_MIN,LONG_MAX);
//     printf("UNSIGNED long:  max %ul \n ",ULONG_MAX);

   
//     printf("%d\n",'\a');
// printf("%d\n",'a');
}