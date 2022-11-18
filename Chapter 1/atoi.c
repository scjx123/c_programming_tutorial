#include<stdio.h>


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
main(){
    int i=0; 
    char c;
    // for(i=0;i<10;++i){
    //     printf("%d\n",i%10);
    // }

    /*
    * Driver code to test function atoi
    * Test Case 1: "1234" -> 1234
    * Test Case 2: "1" -> 1
    * Test Case 3: "" -> error
    * Test Case 4: "99999999999" -> error //overflow condition? 
    * Test Case 5: "adsad1234" -> error
    * Test Case 6: "-1" -> -1
    */
   char s[1000]; 
    int len = 0; 
    while((len = getline(s))>0 ){
        // printf("%d\n",len); 
        // printf("%s\n",s); 
     printf("%d\n",atoi(s));         
    }


}