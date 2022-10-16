#include <stdio.h> 


#define MAXLINE 200

int removetrail(char s[]){
    int i;
    for(i=0;s[i]!='\n';++i); //go to the end of line 
    i--; 
    for(i>0;((s[i]==' ')||(s[i]=='\t'));--i); //remove trailing blanks & tabs from the back
    
    if(i>=0){
        ++i;
        s[i] = '\n'; //add newline 
        ++i;
        s[i] = '\0'; //add line terminator
    } 
    return i; 
}

int getline1(char s[], int lim){
    int i,c; 
    for(i=0;i<lim-1 && ((c = getchar())!=EOF && c!='\n'); ++i)
        s[i]=c; 

    if(c == '\n'){
        s[i]=c; 
        ++i; 
    }
    s[i]='\0';
    return i; //i=length of the string
}

/*Exercise 1-19. Write a function reverse(s) that reverses the character string s. Use it to
write a program that reverses its input a line at a time.*/
void reverse(char s[]){
    int i,j;
    char temp;
    for(i = 0 ; s[i] != '\n'; ++i);
 
    for(j = 0 ;j != i-1 ; ++j){
        temp = s[j];
        s[j]=s[i];
        s[i]=temp;
        --i; 
    }
    printf("%s",s); 
}

void reverseChar(){
    char currentLine[MAXLINE];
    int len; 
    while(len = getline1(currentLine,MAXLINE)>0){
        reverse(currentLine);
        
    }
}


/*Exercise 1-18. Write a program to remove trailing blanks and tabs from each line of input, and
to delete entirely blank lines.*/
void removeTrailingBlanksAndTabs(){
    char line[MAXLINE];
    int len; 
    while((len = getline1(line,MAXLINE))>0){
        //  printf("%s",line); 
       if(removetrail(line)>0)
        printf("%s",line); 
    }
}


/*Exercise 1-17. Write a program to print all input lines that are longer than 80 characters*/
void printLongerThan80(){
    char longestLine[200];
    int c,count,maxcount;
    count = 0;
    maxcount = 80;
    while((c = getchar()) != EOF){
        if(c =='\n'){
            if(count>maxcount){
                // maxcount=count;
                printf("The following line has more than 80 characters.");
                 printf("Length: %d : %s\n",count,longestLine);
            }
            count = 0; 
        }else{
            longestLine[count]=c;
            count++;
        }
    }
    longestLine[maxcount]='\0';
    printf("The longest line has %d characters : %s\n",maxcount,longestLine);
}

/*Exercise 1-16. Revise the main routine of the longest-line program so it will correctly print the
length of arbitrary long input lines, and as much as possible of the text.*/
void printLengthAndString(){
    char longestLine[200];
    int c,count,maxcount;
    count = 0;
    maxcount = 0;
    while((c = getchar()) != EOF){
        if(c =='\n'){
            if(count>maxcount){
                maxcount=count;
            }
            count = 0; 
        }else{
            longestLine[count]=c;
            count++;
        }
    }
    longestLine[maxcount]='\0';
    printf("The longest line has %d characters : %s\n",maxcount,longestLine);

}

int main(void){
    // printLongerThan80();
// removeTrailingBlanksAndTabs();
reverseChar(); 
    return 0; /*As a reminder that program should return their status 
    to their environment*/ 
}