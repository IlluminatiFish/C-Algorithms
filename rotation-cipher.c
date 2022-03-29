#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *decipher(char *message, int rotation) {
    
    char *result;
    size_t length = strlen(message);
    
    for(int i=0; i < length; ++i) {
        if(!isspace(message[i]) || !isblank(message[i])) {
            result[i] = message[i] - rotation;
        } else {
            result[i] = message[i];
        }
        
    }
    return result;
    
}

char *cipher(char *message, int rotation) {
    
    char *result;
    size_t length = strlen(message);
    
    for(int i=0; i < length; ++i) {
        if(!isspace(message[i]) || !isblank(message[i])) {
            result[i] = message[i] + rotation;
        } else {
            result[i] = message[i];
        }
        
    }
    return result;
}

int main() {
    
    int rotation;
    char *message, *ciphered, *unciphered;
    
    
    message = malloc(20);
    
    if(message == NULL) {
        printf("\nFailed to allocate continguous memory slot");
        exit(-1);
    }
    
    printf("\n[+] Text to be encrypted: \n");
    scanf("%s", message);
    
    printf("\n[+] Shift by: ");
    scanf("%d", &rotation);
    
    ciphered = cipher(message, rotation);
    printf("\nCiphered Text: %s", ciphered);
    
    unciphered = decipher(ciphered, rotation);
    printf("\nUnciphered Text: %s", unciphered);
    
    return 0;
}
