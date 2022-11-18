/*
Author: Steve Chan
Email : steve_chan@live.com.sg
*/

#include <stdio.h>

/*
Binsearch recursive
INCOMPLETE
*/
int binsearch_r(int x, int arr[],int low,int high){
    int mid = (low+high)/2;
    if(arr[mid]==x){
        return mid; 
    }else if(x > arr[mid]){
        return binsearch_r(x,arr,(low=mid+1),high)
    }else{
        return binsearch_r(x,arr,low,(high=mid+1))
    }
}

/*
Binary search decides if x occurs in sorted array v.
returns index of the number, else -1
*/
int binsearch(int x, int arr[], int size){
    int i; 
    //Binary search
    int low,high,mid;
    low=0;
    high = size -1; 

    while(low<=high){
        mid = (low+high)/2;  
        printf("%d\n",mid);
        if(arr[mid]==x){
            //found
            return mid; 
        }else if(x>mid){
            low=mid+1; 
        }else{
            high=mid+1; 
        }
    }
    return -1; 

    //Linear search (O(n))
    // for (i=0;i<size;++i){
    //     if(arr[i]==x){
    //         //found
    //         return i; 
    //     }
    // }
    // return -1; c
}
main(){
  int arr[5] ={1,2,3,4,5}; 
  printf("%d\n",binsearch(5,arr,5)); 
}