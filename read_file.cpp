#include <stdio.h>
#include <stdlib.h>

int main( int argc, char **argv){

    FILE *file_input;
    int c;
    file_input = fopen("assets/in.txt","r");
    while(1){
        c = fgetc(file_input);
        if( feof(file_input) ){ 
            break ;
        }
        printf("%c %i, ",c,c);
    }
    fclose(file_input);
    return(0);
    
}

