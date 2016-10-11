#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main( int argc, char **argv){

   FILE *fi, *fo;
   char *cp;
   int c;

   fi = fopen("assets/in.txt","r");
   fo = fopen ("assets/out.txt", "w");
   while(1){
      c = fgetc(fi);
      if( feof(fi) ){ 
         break ;
      }
    std::cout << (char)c << " ";
       // fprintf(fo, "%c",c);
       // printf("%c", c);
   }
   fclose(fo);
   fclose(fi);
   
   return(0);
}
