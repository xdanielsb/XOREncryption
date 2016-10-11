#include <stdio.h>
#include <string.h>


void encode(char plain_text[], char key[]){
    
    FILE *file_output;
    file_output = fopen("assets/cipher.txt", "w");
    
    int size_plain_text = strlen(plain_text);
    int size_key =  strlen(key);

    for (int i=0; i<size_plain_text; i++){
        int c1 = plain_text[i];
        int c2 = key[i%size_key];
        int result = c1 ^ c2;
        putc(result, file_output);
    }
    
    fclose(file_output);
}

void decode(char key[]){
    FILE *file_input;
    int c;
    file_input = fopen("assets/cipher.txt","r");
    int cont = 0;
    int size_key =  strlen(key);
    int result;
    
    while(1){
        c = fgetc(file_input);
        if( feof(file_input) ){ 
            break ;
        }
        result = c ^ key[cont%size_key];
        printf("%c",result );
        cont = cont +1;
    }
    fclose(file_input);

}

int main( int argc, char **argv){
    char plain_text[] = "This is the secret message that I need to deliver";
    char key[] = "$uid%ui*yi({o))oe";

    encode(plain_text, key);
    decode(key);
}
