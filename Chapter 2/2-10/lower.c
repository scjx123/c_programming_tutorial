/*
Author: Steve Chan
Email : steve_chan@live.com.sg
*/

#include <stdio.h>

/*
Convert a char to lowercase
*/
char lower(char c){
    return (c >= 'A'&&c<='Z')?c-'A'+'a':c; 
}
main(){
  printf("%c\n",lower('B')); 
  printf("%c\n",lower('c')); 

}