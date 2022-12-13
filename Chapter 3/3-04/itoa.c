/*
Author: Steve Chan
Email : steve_chan@live.com.sg
*/

#include <stdio.h>
#include <string.h>

void reverse(char s[]){
    int i,j,size;
    char c;  
    i=j=0;
    size = strlen(s); 
    for(;i<size;++i);
    j=0;
    if(i==size){
        while(j<=i){
        //    printf("%d %d\n",j,i);
            c = s[j];
            s[j] = s[i]; 
            s[i] = c; 
            j++,i--; 
            
            // printf("%c\n",s);
        }
    }
    // printf("%d\n",j);
    // s[j] ='\0';
    // printf("%d\n",strlen(s));
    for(i=0;i<size+1;i++)printf("%c",s[i]);
    // s[j]='\0';/
    printf("%s\n",s);
    
}

/* itoa: convert n to characters in s */
void itoa(int n, char s[])
{
int i, sign;
if ((sign = n) < 0) /* record sign */
n = -n; /* make n positive */
i = 0;
do { /* generate digits in reverse order */
s[i++] = n % 10 + '0'; /* get next digit */
} while ((n /= 10) > 0); /* delete it */
if (sign < 0)
s[i++] = '-';
s[i] = '\0';
reverse(s);
}

int main(){
    char s[12] ="hello world";
    char s1[4];
    char num=(char)-128;
    printf("%d\n",num); 
    // reverse(s);
   itoa(num,s1);
    return 0;
}