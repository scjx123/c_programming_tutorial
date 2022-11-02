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
#define TABSTOP 8
int main(){
    char s1[MAXLINE]={"\t.\n"}; 
    char s2[MAXLINE]={".\t,\n"}; 
   char s3[MAXLINE]={"..\t,\n"};

    int counter,ns_counter,numberOfSpaceToPrint;
    char c;  
    char ns[MAXLINE]; 
    counter=ns_counter=numberOfSpaceToPrint=0; 

    // while((c=s3[counter])!='\n'){
    //     printf("%c\n",s3[counter]); 
    //     ++counter; 
    // }


    while((c=s3[counter])!='\n'){
        if(c=='\t'){
            //first we must know how far away from tabstop? 
            numberOfSpaceToPrint = (TABSTOP-counter)%TABSTOP; //how much remaining out of tabstop given my current distance?
            // printf("%d\n",numberOfSpaceToPrint);
            // printf("This a tab! \n");
            ns_counter=counter; 
            while(numberOfSpaceToPrint!=0){
                ns[ns_counter] = ' '; 
                
                --numberOfSpaceToPrint; 
                ++ns_counter;
            }
        }else{
            // ns_counter = counter++; 
            // putchar(c); 
            ns[ns_counter] = c; 
            ++ns_counter;
        }
        ++counter; 
    }
    
    ns[ns_counter]='\0';
    printf("%s\n", ns); 

    return 0; 

}