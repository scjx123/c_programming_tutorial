/*
Author: Steve Chan
Email : steve_chan@live.com.sg
*/

#include <stdio.h>
#include <time.h> 

#define EPOCH 100

clock_t start, end;


void update(int runcount){
    // if(progress==30||progress==50||progress==100)
    printf("%d/%d\n",runcount,EPOCH); 
    fflush(stdout); 
}
int main(){
    int runcount = 0; 
    double time_taken;
    float sum1,sum2;
    sum1=sum2=0.0;  

    /*Driver Code Variables*/

    //Table Header
    #ifdef EXPLICIT
    printf("binsearch|Time Taken|eff_binsearch|Time Taken\n");
    #endif 
    while(runcount < EPOCH){
    /****************Set 1 ***********************************/
     start = clock();/*Driver Code Start*/
     end = clock();/*Driver Code End*/

     #ifdef EXPLICIT
     printf("%d",binsearch(4,v,6));
     #endif
     time_taken= (double)(end - start) / (double)(CLOCKS_PER_SEC);
     sum1+=time_taken; 

     #ifdef EXPLICIT
     printf("\t%lf",time_taken);
     #endif
     /****************Set 2 ***********************************/
     start = clock(); /*Driver Code Start*/
     end = clock(); /*Driver Code End*/
     
     #ifdef EXPLICIT
     printf("\t%d",eff_binsearch(4,v,6));
     #endif

     time_taken= (double)(end - start) / (double)(CLOCKS_PER_SEC);
     sum2+=time_taken;
     #ifdef EXPLICIT
     printf("\t%lf\n",time_taken);   
     #endif
     
     runcount++;
     
    //  update(runcount);
    }

    printf("Average sum1 Time : %.10lf sec\n",(sum1/EPOCH));
    printf("Average sum2 Time : %.10lf sec\n",(sum2/EPOCH)); 
 
    return 0;
}