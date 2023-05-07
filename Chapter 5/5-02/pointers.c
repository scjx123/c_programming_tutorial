/*
Author: Steve Chan
Email : steve_chan@live.com.sg
*/

#include <stdio.h>

int strlen(char *s){
    char *p = s; 
    while(*p!='\0')
    p++; 
    return p-s;7
}




int main(){
    int arr[] = {1,2,3,4,5,6,7,8}; 
    void*t=arr; 
    int i; 
    printf("%d\n",arr[-2]);
    printf("%d\n",strlen("fuck"));
    
    return 0;
}