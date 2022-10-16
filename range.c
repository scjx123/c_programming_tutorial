#include <stdio.h>
#include <limits.h>
#include <float.h>

#define LINE1 "i am a string" "world"

main(){
    printf("SIGNED Chars: min %d, max %d \n ",CHAR_MIN,CHAR_MAX);
    printf("UNSIGNED Chars: max %d \n ",UCHAR_MAX);

    printf("SIGNED short: min %d, max %d \n ",SHRT_MIN,SHRT_MAX);
    printf("UNSIGNED short: max %d \n ",USHRT_MAX);

    printf("SIGNED int: min %d, max %d \n ",INT_MIN,INT_MAX);
    printf("UNSIGNED int: max %ld \n ",UINT_MAX);

    printf("SIGNED long: min %d, max %d \n ",LONG_MIN,LONG_MAX);
    printf("UNSIGNED long:  max %ld \n ",ULONG_MAX);

   
    printf("%d\n",'\a');
printf("%d\n",'a');
}