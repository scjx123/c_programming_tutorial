/*
Author: Steve Chan
Email : steve_chan@live.com.sg
*/

#include <stdio.h>

int mgetline(char s[],int lim){
    
    int c,i; 
    for(i=0;i<lim-1 && (c=getchar())!=EOF && c!='\n';++i)
        s[i] = c; 
    
    if(c=='\n')
    {
        s[i] =c; 
        ++i;
    }
    s[i] ='\0'; 

    return i; 
}


int main(){
    

   
    return 0;
}