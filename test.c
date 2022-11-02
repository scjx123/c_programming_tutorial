#include<stdio.h>

main(){
    int i=0; 
    char c;
    // for(i=0;i<10;++i){
    //     printf("%d\n",i%10);
    // }

    //receive a buffer of 10 char
    do{
        c = getchar();
        printf("%d, %c\n",i,c); 
        ++i;
        
        // putchar(c); 
    }
    while((i%10)!=0);
}