#include <stdio.h>

#define MAXLINE 200
#define TABWIDTH 8
int getline1(char s[],int lim){
    int c; 
    int i; 
    for(i=0;i<lim-1 && ((c=getchar())!=EOF && c!='\n');++i)
        s[i]=c; 
    if(c=='\n')
        s[i]='\0';
    return i; 
}

int detab(char s[], int len){
    int i,j; 
    
    for(i = 0 ; i < len ; ++i){
        if(s[i] == '\t'){
            for(j = i; j < TABWIDTH; ++j)
                s[j]=' '; 
        i+=TABWIDTH; 
        }
    }
    printf("%s",s); 
}

int main(){
    int len; 
    char line[MAXLINE]; 
    while(len = getline1(line,MAXLINE)>0)
        detab(line,len); 
    return 0; 
}