/*
Author: Steve Chan
Email : steve_chan@live.com.sg
*/

#include <stdio.h>
#include <string.h>

int getline1(char s[],int lim){
    int i,c; 
    while(--lim>0 && (c==getchar())!=EOF && c!='\n')
    s[i++]=c;
    if(c=='\n')
        s[i++]=c; 
    s[i] = '\0'; 
    return i; 
}

/*
strindex checks in a pattern is contain in string
*/
int strindex_original(char s[],char p[]){
    int i,j,k; 
    for(i=0;s[i]!='\0';i++){
        for(k=i,j=0;p[j]!='\0' && p[j]==s[k];j++,k++);
        if(s[k]=='\0' && k>0)return i;
    }return -1;
}

/*
strindex returns the position of the right mose occurence of t in s
or -1 if there is none
*/
int strindex(char s[],char t[]){
    int i,j,k; 
    for(i=0;s[i]!='\0';i++){
        for(k=i,j=0;t[j]!='\0' && t[j]==s[k];j++,k++);
        if(s[k]=='\0' && k>0)return k;
    }return -1;
}


int main(){
    char s1[]="hello world"; 
    char s2[]="ld"; 
    printf("%d\n",strindex(s1,s2));
    // printf("%d\n",strindex(s2,s1));
    
    return 0;
}