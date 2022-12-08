/*
Author: Steve Chan
Email : steve_chan@live.com.sg
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
/*
Write a function expand(s1,s2) that expands shorthand notations like a-z in
the string s1 into the equivalent complete list abc...xyz in s2. Allow for letters of either case
and digits, and be prepared to handle cases like a-b-c and a-z0-9 and -a-z. Arrange that a
leading or trailing - is taken literally.

Test Cases 1: s1=a-z -> s2 a,b,c...x,y,z
Test Cases 1: s1=a-b-c -> s2 a,b,c...x,y,z
Test Cases 1: s1=a-z0-9 -> s2 a,b,c...x,y,z
Test Cases 1: s1=-a-z -> s2 a,b,c...x,y,z
*/

#define ALPHA_LIM 'z'
#define NUM_LIM '9'

int expand(char s1[],char s2[]){
    int i,j;
    char c; 
     i=j=0;
    for(i=0,j=0;s1[i]!='\n';++i){
        if(s1[i]=='-' && i>0 && isalpha(s1[i-1])&&isalpha(s1[i+1]))
        { //range identified
         c = s1[i-1];
         while(c!=s1[i+1]){
          s2[j++]=(c+=1);
          s2[j++]='\n';
         }
        } 
        else
          s2[j++] = s1[i];   
    }
    
    // s2[j]='\n';
}


int main(){
    char s1[3] = "a-z";
    char s2[100]; 
    expand(s1,s2);
    int i=0;  
    while(s2[i]!='\n')
        printf("%c",s2[i++]); 

    return 0;
}