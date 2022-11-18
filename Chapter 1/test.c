#include<stdio.h>

void funcA(double); 
 /*
* Convert a string of digits into its numeric equivalent
* 
* Test Case 1: "1234" -> 1234
* Test Case 2: "1" -> 1
* Test Case 3: "" -> error
* Test Case 4: "99999999999" -> error //overflow condition? 
* Test Case 5: "adsad1234" -> error
* Test Case 6: "-1" -> -1
*/

int atoi(char s[]){
    int i,sum;

    i = sum = 0; 

    while (s[i] != '\0'){
        if (s[i]>='0' && s[i]<='9'){
            sum  = sum*10 + s[i]-'0'; 
        }     
        ++i; 
    }
    if(s[0]=='-'){
        sum *= -1; 
    }
    return sum; 
}

/*
* getline read a line and return the lenght 
*/
int getline(char s[]){
    char c;
    int i;  
    while((c = getchar())!=EOF && c!='\n')
    {
        s[i] = c; 
        ++i; 
    }
    s[i] = '\0';   
    return i; 
}

void funcA(float a){
 printf("size of a :%d\n",sizeof(a)); 
}

main(){
   printf("int %d\n",sizeof(int));  
printf("char %d\n",sizeof(char));  
printf("float %d\n",sizeof(float));  
printf("double %d\n",sizeof(double));  
double b = 123.0; 
funcA(b); 

}
