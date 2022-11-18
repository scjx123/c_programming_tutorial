#include <stdio.h>

/*
* Squeeze removes all occurences of the character c from string s 
* Test Case 1: "hello world",'o' -> "hell wrld"
* Test Case 2: "s",'s' -> ""
*/
void squeeze(char s[],char c){
  int i,j;
  for (i=0;s[i]!='\0';++i){
    if(s[i]!=c){
     s[j++] = s[i]; 
   }
  }
  s[j] = '\0'; 
  printf("%s\n",s); 
}

/*
* getline returns the length of the user entered string 
*/
int getline(char s[]){
 int i=0; 
 while((c=getchar())!=EOF && c!='\n'){
  s[i] = c; 
  ++i; 
 }
 s[i] = '\0'; 
 return i; 
}
/*
* main should take in 2 arg from user 
* string and char
* note:
*   char* means string
*   char** argv, simply means an array of strings. 
*/
main(int argc, char**argv){
 /*
  * Driver code
  */
  int len;
  char s[1000];  
  while((len =getline())>0){
  }  

}
