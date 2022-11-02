#include "stdio.h"

#define VECTOR_SIZE 7

int binsearch(int* pV, int n){
    int start,end,mid; 
    //update variable
    start = 0;
    end = VECTOR_SIZE-1; 

    //start comparing 
    while(start <= end){
            mid = (end-start)/2;
        if(n==*(pV+mid))
            return mid; 
        else if(n>*(pV+mid))
            end = mid;
        else start = mid; 
    }
    return -1; 
}

main(){
    int v[VECTOR_SIZE]={1,2,2,3,4,5,7}; 
    // printf("hello world");
    printf("%s\n",(binsearch(v,2)>=0)?"It Exist!":"NOOOOO"); 
}