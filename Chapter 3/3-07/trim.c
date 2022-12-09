/*
Author: Steve Chan
Email : steve_chan@live.com.sg
*/

#include <stdio.h>


/*
trim, removes trailing blanks, tabs and newlines from the end of a
string, using a break to exit from a loop when the rightmost non-blank, non-tab, non-newline
is found.
*/
#include <string.h>
void trim1(char s[]){
  int i=strlen(s)-1; //counts in 1-index
  while(s[i]==' '||s[i]=='\t'||s[i]=='\n')
    --i;
  s[i+1]='@';
  s[i+2]='\0'; 
  printf("%s\n",s); 
}

/* trim: remove trailing blanks, tabs, newlines */
int trim(char s[])
{
int n;
for (n = strlen(s)-1; n >= 0; n--)
if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
break;
s[n+1] = '@';
s[n+2] = '\0';
printf("%s\n",s);
return n;
}

int main(){
    char s[]="hello world    ";
   trim1(s); 
    return 0;
}