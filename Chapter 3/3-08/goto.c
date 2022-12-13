/*
Author: Steve Chan
Email : steve_chan@live.com.sg
*/

#include <stdio.h>

found:
/* got one: a[i] == b[j] */
    printf("goodjob");
    
int main(){
    int i,j,n,m;
    int a[]={1,2,3,4,5,6,7,8,9}; 
    int b[]={2,4,6,7,8}; 

    n=9,m=5;
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            if (a[i] == b[j])
            goto found;
            /* didn't find any common element */
            ...


   
    return 0;
}
