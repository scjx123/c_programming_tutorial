/*
Author: Steve Chan
Email : steve_chan@live.com.sg
*/

#include <stdio.h>

void shellsort(int v[],int n){
    int gap, i, j,temp;
    for(gap = n/2 ; gap>0 ; gap/=2) //setting the gap size
        for(i=gap; i<n ;++i) //set i to be right of the gap
            for(j=i-gap; j>=0 && v[j]>v[j+gap]; j-=gap){ //setting the left width of gap
                temp = v[j],v[j]=v[j+gap], v[j+gap]=temp; //take the left larger element
                // v[j]=v[j+gap];
                // v[j+gap]=temp; 
            }
}

int main(){
    int v[8]={1,7,6,1,5,6,7,2}; 
    
    shellsort(v,8); 
    for(int i=0;i<8;++i)
        printf("%d ",v[i]);
   
    return 0;
}