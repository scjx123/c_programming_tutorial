/*
Author: Steve Chan
Email : steve_chan@live.com.sg
*/

#include <stdio.h>
#include <time.h> 

#define EPOCH 5

clock_t start, end;


int main(){
    char runcount = 0; 
    double time_taken;
   
    //Table Header
    printf("Result |Time Taken\n");
    
    while(runcount < EPOCH){
     start = clock();
     
     /*Driver Code Start*/
     /*Driver Code End*/
    
     end = clock();
     time_taken= (double)(end - start) / (double)(CLOCKS_PER_SEC);
     printf("\t%lf\n",time_taken);    
     runcount++; 
    }
    return 0;
}