#include <stdio.h> 

/*
* Lower maps a single character to lower case for
* ASCII character set. If the character is not an
* upper case letter, lower returns unchanged. 
* Test Case 1: A -> a
* Test Case 2: 1 -> 1 
* Test Case 3: 
*/
char lower(char c){
    char _c; 
    if(c >= 'A' && c<='Z')
        return c - 'A' + 'a';     
    else 
        return c;  
}

/*
* getline returns gets input from user and return length of string
*/
int getline(char s[]){
    char c; 
    int i = 0; 
    while((c=getchar())!= EOF && c!='\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0'; 
    return i; 
}


main(){
/*
* Test Case 1: A -> a
* Test Case 2: 1 -> 1 
* Test Case 3: 
*/
char s[1000]; 
int len; 
 
if(-1L > 1UL){
    printf("True");
}else{
    printf("False");
}

//  while((len =getline(s))>0){
//     printf("%c\n",lower(s)); 
//  }

   
}