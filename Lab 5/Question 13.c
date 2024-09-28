/*
   Name : Hardeep Naresh
   Date : 26 Sept 2024
   Desc : Encrypted and Decrypted
*/
#include <stdio.h>

int main() {
    char key = 42;  
    char original_character;
    char encrypted_value;
    char decrypted_character;
    
    printf("Enter a character to encrypt: ");
    scanf(" %c", &original_character);  

    encrypted_value = original_character ^ key;
    printf("Encrypted value: %d\n", encrypted_value);

    decrypted_character = encrypted_value ^ key;
    printf("Decrypted character: %c\n", decrypted_character);

    return 0;
}
