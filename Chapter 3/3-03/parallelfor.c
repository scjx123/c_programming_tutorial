/*
Author: Steve Chan
Email : steve_chan@live.com.sg
*/

#include <stdio.h>
#include <string.h>
/*reverse: reverse string s in place */ 
void reverse(char s[]){
    int c,i,j;
    // printf("%d\n",strlen(s));
    for (i = 0, j = strlen(s)-1; i < j; i++, j--){
        c = s[i]; 
        s[i] = s[j];
        s[j] = c;
        // printf("%c",s[j]);
    }
    for(i=0;i<strlen(s);++i)
    printf("%c",s[i]);
    
}

int main(){
    char s[12]= "hello world"; 
    reverse(s); 
   
    return 0;
}