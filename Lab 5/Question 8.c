#include <stdio.h>

int main() {
    int number;
    int i= 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number > 0) {
        if (number & 1) {
            i=i+1;
        }
        number =number>> 1;
    }

    printf("The number of 1s in the binary representation is: %d\n", i);
    return 0;
}
