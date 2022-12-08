/*
Author: Steve Chan
Email : steve_chan@live.com.sg
*/

#include <stdio.h>
#include <ctype.h>
int atoi(char s[]){
    int i,n,sign; 
    printf("%d\n",isspace(s[0])); //false
    for(i=0;isspace(s[i]);++i) //false, therefore terminated. 
                               //so it skips any beginning spaces
                      
    printf("%d\n",i); //Here, the loop is terminated for 
    // for(i=0;s[i]!='\n';++i);
    // printf("%d\n",i); 
}

int main(){
    char s[20] = "hello world";

    atoi(s); 
   
    return 0;
}