#include <stdio.h>

int main(int argc, char **argv){
    
    FILE *file_output;
    file_output = fopen("assets/cipher.txt", "w");
    char text[]= "Hello this is my name";
    
    int size_text = sizeof(text);

    for (int i=0; i<size_text; i++){
        int c = text[i];
        putc(c, file_output);
    }

    fclose(file_output);
}
