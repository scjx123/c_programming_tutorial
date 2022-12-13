/*
Author: Steve Chan
Email : steve_chan@live.com.sg
*/

#include <stdio.h>

/*
Recursive itoa, convert an integer into a string by calling a 
recursive routine. 
*/
int itoa(int n,char s[]){
    int i=0;
    if(n<0){
        s[0]='-';
        i++; 
    }
    if(n/10){
        //    s[pos]= n %10 +'0';
        i = itoa(n/10,s);
    }
    s[i++]= n %10 +'0';
    s[i]='\0';
    return i;
    // s[pos+1]='\0';
}

int main(){
    
    int x = 11234; 
    char s[20]; 
    itoa(x,s);
   printf("%s\n",s); 
    return 0;
}