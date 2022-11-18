#include <stdio.h>
#define MAXLINE 200
#define TABSTOP 4 


int countBlanks(char s[]){
    int i,count;
    i=count=0;
    while(s[i]!='\n'){
        if(s[i]==' '){
            ++count; 
        }
        ++i; 
    }
    return count; 
}

void insertNTimesTabs(int nTimes){ 
     while(nTimes>0){
        printf("\t"); 
        --nTimes; 
    }
}

void insertNTimesBlanks(int nTimes){
   while(nTimes>0){
        printf(' '); 
        --nTimes; 
    } 
}
main(){
    //Testcases 
    char s1[MAXLINE]="____a\n";    //4 spaces 
    char s2[MAXLINE]="_____\n";    //5 spaces
    char s3[MAXLINE]="________\n"; //8 spaces
    char s4[MAXLINE]="___\n";      //3 spaces
    
    int eval,numberOfBlanks,nTimes;

    numberOfBlanks=countBlanks(s1); 

    eval = numberOfBlanks % TABSTOP;

    nTimes = eval/TABSTOP; 
 
    if(eval == 0){
       //numberOfBlanks is perfectly divisible by Tabstop
       insertNTimesTabs(nTimes); 
    }else{
       //numberOfBlanks is not divisible by tabstop
       if(eval>TABSTOP){
        insertNTimesTabs(nTimes);
        insertNTimesBlanks(numberOfBlanks-(nTimes*TABSTOP));
       }
       
    }





}