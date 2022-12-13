/*
Author: Steve Chan
Email : steve_chan@live.com.sg
*/

#include <stdio.h>
#include <time.h> 

#define EPOCH 10000

clock_t start, end;

/*
* Binary search first compares the input value x to the middle element of the array v. 
* If x is less than the middle value, seraching focueses on the lower half of the table, otherwise, on the 
* upper half. In either case, then next step is to compare x to the middle element of the selected half.
*/
int binsearch(int x, int v[], int n){
    int start,mid,end; 
    start=0;
    end = n-1; 
    while(start<=end){
        mid = (start+end) /2; 
        //3-way decision
        if(x>v[mid]) start = mid+1; //1,3,3,4,6,7
        else if(x<v[mid])end = mid-1; 
        else if(x==v[mid])return mid; 
    }
    return -1; 
}

int eff_binsearch(int x, int v[],int n){
    int start,mid,end; 
    start=0;
    end = n-1; 
    while(start<=end){
        mid = (start+end) /2; 
        if(x>v[mid])start=mid+1;
        else end = mid -1;  
    }
    
    if(v[mid]==x)return mid;
    else return -1; 
}


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
    int v[6]={1,2,3,4,4,6}; 

    //Table Header
    #ifdef EXPLICIT
    printf("binsearch|Time Taken|eff_binsearch|Time Taken\n");
    #endif 
    while(runcount < EPOCH){
    /****************Set 1 ***********************************/
     start = clock();/*Driver Code Start*/
     binsearch(4,v,6); 
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
     eff_binsearch(4,v,6);
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

    printf("Average binsearch Time : %.10lf sec\n",(sum1/EPOCH));
    printf("Average eff_binsearch Time : %.10lf sec\n",(sum2/EPOCH)); 
 
    return 0;
}