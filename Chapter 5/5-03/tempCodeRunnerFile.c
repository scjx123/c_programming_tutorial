/*
Author: Steve Chan
Email : steve_chan@live.com.sg
*/

#include <stdio.h>

/*
Copies the string t to the end of s
*/
void strcat(char* s,char* t){
    char* i=s; 

    while(*s!='\0')
        s++;
        
    printf("%p\n",s);
    while(*t!='\0'){
        printf("%p\n",s);
        *s++ = *t++;
        
        // printf("%c\n",*s);
    }
    *s='\0';
    s=i;  
    while(*s!='\0')printf("%s",s);
         
    
    // *(s+=t)='\0'; 
}


int main(){
    char d1[]="hello world";
    char d2[]="im bill"; 
  

    // char *s= &d1;
    
    // printf("%p\n",d1);
    // printf("%p\n",s);
    strcat(d1,d2); 

    // while(s!='\0')printf("%c",*s);    

   
    return 0;
}