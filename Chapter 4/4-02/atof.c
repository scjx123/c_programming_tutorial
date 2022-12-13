/*
Author: Steve Chan
Email : steve_chan@live.com.sg
*/

#include <stdio.h>
#include <ctype.h> 



/*
convert string to double
Test Case -> "123.1" -> 123.1 
*/
double atof(char s[]){
    int i; 
    double val,power;

    for(i=0;isspace(s[i]);i++); 
    int sign = s[i]=='-'?-1:1; 
    if(s[i] == '+'||s[i] -'\0');
    for(val=0.0;isdigit(s[i]);i++)
        val = val*10.0 + s[i]-'0';
    if(s[i] =='.')i++; 
    for(power = 1.0; isdigit(s[i]);i++){
        val = 10.0*val + (s[i] -'0'); 
        power *=10; 
    }
    val = sign*val/power; 
    
    int sum=0; 
    if(s[i]=='e'||s[i]=='E'){
        sign = s[++i]=='-'?-1:1;
        for(i++;isdigit(s[i]);i++){
            sum = sum*10 + s[i]-'0';
        }
        while(sum>0){
            if(sign==-1)val/=10,sum--; 
            else val*=10; 
        }
        printf("%f\n",val);
    }
    
    return sum>0?val/sum:val; 

}


int atoi(char s[]){
    double atof(char s[]);
    return (int)atof(s); 
}

int main(){
    char s[] = "123.1e-6";
    printf("%d\n",atoi(s));
    
    return 0;
}