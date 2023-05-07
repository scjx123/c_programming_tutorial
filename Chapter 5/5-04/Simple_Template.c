/*
Author: Steve Chan
Email : steve_chan@live.com.sg
*/

#include <stdio.h>


/*
returns 1 if the string t occurs at the end of the
string s, and otherwise 0.

Test Case 1: hello world, world, -> 1
*/
int strend(char *s, char* t){
    int i; 
    while(*s++!='\0'){
        if(*s==*t)printf("%c",*s);
        while(*s==*t){
            s++,t++; 
            // printf("test");
            if(*s=='\0')return 1; 
        }
    }
    return 0; 
}

int main(){
    char s[]="hello world";
    char t[]="world"; 
    char *p=&t; 
    
    while(*p++!='\0')
    printf("%c",*p);


    printf("%d\n",strend(s,t));
   
    return 0;
}