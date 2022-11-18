#include <stdio.h> 
#include <time.h> 
/* Convert celsius to farenheit table */ 

main(){
clock_t begin = clock(); 

    float fahr, celsius; 
    float lower, upper, step; 

    lower = 0; 
    upper = 300; 
    step = 20; 

    celsius = lower; 
    printf("%s\t\t%s\n","Celsius","Farenheit");
    while (celsius <= upper){
        fahr = 32 + 9 * celsius / 5;
        printf("%3.1f\t%6.1f\n",celsius,fahr);
        celsius = celsius + step;  
    }
// sleep(3); 

clock_t end = clock(); 
float duration = (double)(end - begin) / CLOCKS_PER_SEC; 
printf("%f\n",duration);
}