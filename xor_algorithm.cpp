#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main( int argc, char **argv){

   FILE *file_input, *file_output;
   char *cp;
   int c;

   file_input = fopen("assets/in.txt","r");
   file_output = fopen ("assets/out.txt", "w");
   

   while(1){
      c =(int) fgetc(file_input);
      if( feof(file_input) ){ 
         break ;
      }
    unsigned int val = 1;
    std::cout << c ^ val;
       // fprintf(fo, "%c",c);
       // printf("%c", c);
   }
   fclose(file_output);
   fclose(file_input);
   
   return(0);
}
