#include <stdio.h>

void encode(char plain_text[], char key[]){
    
    FILE *file_output;
    file_output = fopen("assets/cipher.txt", "w");
    
    int size_plain_text = sizeof(plain_text);
    int size_key =  sizeof(key);

    for (int i=0; i<size_plain_text; i++){
        int c1 = plain_text[i];
        int c2 = key[i%size_key];
        int result = c1 ^ c2;
        putc(result, file_output);
    }

    fclose(file_output);
}

void decode(char key[]){
    

}

int main( int argc, char **argv){
    char plain_text[] = "This is the secret message that I need to deliver";
    char key[] = "$uid%ui*yi({o))oe";

    encode(plain_text, key);
}
