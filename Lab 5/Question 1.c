/* 
    Name : Hardeep Naresh 
    Date : 26 Sept 2024
    Desc : Age Problem( teen or adult )
*/
#include <stdio.h>

int main() {
    int age; 
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 0) {
        if (age <= 12) {
            printf("You are a Child.\n");
        } 
        else if (age <= 19&& age> 12) {
            printf("You are a Teenager.\n");
        }
        else if (age <= 64 && age > 19) {
            printf("You are an Adult.\n");
        }
        else {
            printf("You are a Senior.\n");
        }
    }
  else {
        printf("Invalid age");
    }

    return 0; 
}
