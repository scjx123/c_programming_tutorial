#include <stdio.h> 

void escape(char s[],char t[]){
    int i,j;

    i=j=0; 
    while(t[i]!='\0'){
        switch(t[i]){
            case '\n': 
                s[j++]='\\';
                s[j]='n'; 
                break;
            case '\t':
                s[j++]='\\';
                s[j]='t'; 
                break;
            default:
                s[j]=t[i]; 
                break;
        }
        ++i;
        ++j;  
    }
    s[j]='\0'; 
}

main(){
    char s[20]="";
    char t[20]="goodbye   world"; 
    int i=0; 
    escape(s,t); 
    while(s[i]!='\0'){
        printf("%c",s[i]); 
        ++i;
    }
}