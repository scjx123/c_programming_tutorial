/*
Author: Steve Chan
Email : steve_chan@live.com.sg
*/

#include <stdio.h>
#include <time.h> 
clock_t
/*
binsearch with 1 tests (if-else) inside while loop
INCOMPLETE
*/
int eff_binsearch(int x, int arr[],int n){
    int low,high,mid; 
    low = 0;
    high = n + 1; 
  
    while(low <= high){
        mid = (low + high) / 2;
        if(arr[mid] == x)
            return mid; //Found
        else if(x > arr[mid])
            low = mid +1; 
        else
            high = mid +1;
    }
    return -1; 
} start, end;


/*
binsearch with 2 tests (if-else) inside while loop
*/
int binsearch(int x, int arr[],int n){
    int low,high,mid; 
    low = 0;
    high = n + 1; 
  
    while(low <= high){
        mid = (low + high) / 2;
        if(arr[mid] == x)
            return mid; //Found
        else if(x > arr[mid])
            low = mid +1; 
        else
            high = mid +1;
        
    }
    return -1; 
}

main(){
    int arr[5]={1,2,3,4,5}; 
    int runcount = 0; 
    double time_taken;
    printf("Result |Time Taken\n");
    
    while(runcount<5){
     start = clock();
     
     printf("%d",binsearch(2,arr,5)); 
     
     end = clock();
     time_taken= (double)(end - start) / (double)(CLOCKS_PER_SEC);
     printf("\t%.10lf\n",time_taken);    
     runcount++; 
    }
}