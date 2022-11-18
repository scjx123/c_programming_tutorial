#include <stdio.h> 

/*count digits, white space, others */
main(){
    int c, i,j, nwhite, nother; 
    int ndigits[10];

    nwhite = nother = 0; 
    for(i=0;i<10;++i){
        ndigits[i]=0; 
    }

    while((c=getchar())!= EOF){
        if(c>= '0' && c<= '9')
            ++ndigits[c-'0'];
        else if(c ==' '|| c=='\n'||c=='\t')
            ++nwhite;
        else
            ++nother; 
    }

    printf("digit =\n"); 
    for(i=0;i<10;++i){
        printf(" %d |",ndigits[i]);
        for (j=0;j<ndigits[i];++j){
            printf("="); 
        }
        printf("\n");
    }
    printf(", whitespace = %d, other = %d\n",nwhite,nother); 
    
}