#include <stdio.h>

#define UPPERLIMIT 300
#define STEP 20

double fahrToCelsius(int fahr){
    return (5.0/9.0)*(fahr-32.0); 
}

/* print Fahrenheit-Celsius table 
    for fahr = 0, 20, ..., 300;*/ 
int main(void){
    int fahr; 
    printf("%s\t%s\n","Fahrenheit","Celsius"); 
    for(fahr = 0; fahr<UPPERLIMIT; fahr+=STEP)
        printf("%3d\t%6.3f\n",fahr,fahrToCelsius(fahr));
    return 0; 
}