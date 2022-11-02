  printf("This a tab! \n");
            while(numberOfSpaceToPrint!=0){
                ns[ns_counter] = ' '; 
                while(ns[ns_counter]!='\0')
                    printf("%c",ns[ns_counter]);
                --numberOfSpaceToPrint; 
                ++ns_counter;
            }