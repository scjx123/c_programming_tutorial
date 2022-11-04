#include <stdio.h> 


int atoi(char s[]); 

int atoi(char s[]){
    int i,sum;
    i=sum=0; 
    for (; s[i] >= '0' && s[i] <= '9' ; ++i){
        sum = (sum * 10) + (s[i]-'0'); 
    }
    return sum; 
}

char lower(char c){
    return ((c>='A'&&c<='Z')? c+'a'-'A': c); 
}

int htoi(char s[]){
    int i,sum; 
    i = sum = 0;
    for(;s[i] != '\0' ; ++i){
        if(s[i] >= '0' && s[i] <= '9')
            sum = sum * 16 + s[i] - '0';
        if(s[i] >= 'a' && s[i] <= 'z')
            sum = sum * 16 + s[i] - 'a';
        if(s[i] >= 'A' && s[i] <= 'Z')
            sum = sum * 16 + s[i] + 10 - 'A';    
    }
    return sum; 
}


void squeeze(char s[],char c){
    int i,j;
    i=j=0; 
    while(s[i]!='\0'){ //check for empty/null string
        if(s[i]!=c)
         s[j++]=s[i];
         ++i;
    }
    s[j]='\0';
    printf("%s\n",s); 
     
}

void squeeze_v2(char s1[] , char s2[]){
 int i,j,k;
    k=0;

    for(i=0;s1[i]!='\0';++i)
    {
        for(j=0; (s1[i]!=s2[j]) && s2[j]!='\0' ;++j)
            ;
        if(s2[j]=='\0')
            s1[k++] = s1[i];
    }
    
    s1[k]='\0';
    printf("%s\n",s1);
}

int main(void){
    // printf("%d\n",atoi("123"));
    // printf("%c\n",lower("9674"));
    // printf("%c\n",lower("a"));
    // printf("%c\n",lower('A'));
    // printf("%c\n",lower('Z'));
    // printf("%c\n",lower('ABC'));

//     printf("%d\n",htoi("FFFF"));
// squeeze("hello world",'l');


squeeze_v2(s,"ol"); 
printf("%s\n",s);
return 0; 
}
