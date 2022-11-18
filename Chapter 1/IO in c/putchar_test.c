#include <stdio.h>

#define IN `1
#define OUT 0

void count_blanks_tabs_newline(){
      int nb,nt,nl,c; 
      nb=nt=nl=0;
  
   while((c=getchar())!=EOF){
      if(c == ' ') ++nb;
      else if (c == '\t')++nt;
      else if (c == '\n')++nl; 
   }
   printf("blanks: %d, tabs: %d, lines: %d\n",nb,nt,nl);
}

void char_count(){
   int nc, c; 
   for(nc=0;c=getchar()!=EOF;nc++);
   printf("%d\n",nc);
}

/*Exercise 1-9*/ 
void blankreplacement(){
   int c,count; 
   count=0; 
   while((c = getchar())!=EOF){
      if(c==' '){
         count++;
         if(count<2)putchar(c);
      } 
      else{
         putchar(c); 
      }
   }
}

void replace_blanks_tabs_newline(){
   int c; 
   while((c=getchar())!=EOF){
      if(c == '\t'){
         putchar('\\');
         putchar('t'); 
      }
      else if (c == '\b'){
         putchar('\\');
         putchar('b'); 
         
      }
      else if (c == '\\'){
         putchar('\\');
         putchar('\\'); 
         
      }else{
         putchar(c); 
      } 
   }
}

main(){
   // char_count();
   // count_blanks_tabs_newline(); 
   // blankreplacement();
   // replace_blanks_tabs_newline();  
   printf("%b")
}