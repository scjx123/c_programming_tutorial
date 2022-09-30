#include <stdio.h> 

#define IN 1
#define OUT 0
#define MAX_WORDS 1000

void vertical(){
    int c, nw, nc, state, row, col, max;
    int len_per_word[MAX_WORDS]={0}; 
    state = OUT;
    nw=nc=0;
    while((c=getchar())!=EOF){
        ++nc;
        if(c == ' '|| c == '\n' || c == '\t'){
            state = OUT;
            len_per_word[nw-1]=nc-1; 
        // printf("Number of chars: %d\n",nc);
            nc=0;

        }
        else if(state == OUT){
            state = IN;
            nw++; 
        }
    }

    /* Find Max in Arr */
    max=len_per_word[0];
    for (col = 1; col < nw; col++){
        printf("Inside array %d, is %d\n",col-1,len_per_word[col-1]);
        if(len_per_word[col]>max)
            max=len_per_word[col];
    }
    //     printf("MAX IS : %d\n",max);
    /* Print */
    for(col = 0; col < nw; col++){
        for (row = max; row >= 0; row --){
            if( row <= len_per_word[col])
                printf("*\n");
        }printf("Word %d ",col + 1);
    }
}

void horizontal(){
     int c, nw, nc, state; 
    state = OUT;
    nw=nc=0;
    while((c=getchar())!=EOF){
        ++nc;
        if(c == ' '|| c == '\n' || c == '\t'){
            state = OUT;
            printf("\n");
        }
        else if(state == OUT){
            state = IN;
            ++nw;
            printf("Word %d: ",nw);
            putchar('*');
        }
        else if(state == IN){
            putchar('*');
        }
    }
}

main(){
   vertical(); 
}