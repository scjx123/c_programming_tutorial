/*
Author: Steve Chan
Email : steve_chan@live.com.sg
*/

#include <stdio.h>
#include <string.h>
/*
Reverse the string s in place
*/
void reverse(char s[],int left,int right){    
    char temp;
    //repeating pattern of reversing stirng
    if(left<right){
        reverse(s,left+1,right-1); 
    }
    //swap
    temp = s[left];
    s[left]=s[right]; 
    s[right]=temp; 
    
}


#define square(x) (x)*(x) 
int main(){
    // char s[]="hello world"; 

    // reverse(s,0,strlen(s)-1); 
    // printf("%s\n",s); 

    int x=5; 
    printf("%d\n",square(x+3)); 

    return 0;
}