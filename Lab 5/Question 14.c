#include <stdio.h>

int main() {
    int a,c;
    float b;
    printf("Enter your age: ");
    scanf("%d", &a);

    printf("Enter your income: ");
    scanf("%f", &b);

    printf("Enter your credit score max (850): ");
    scanf("%d", &c);
    if (a>= 18 && a<= 65) {
        if (b>= 30000) {
            if (c>= 650) {
                printf("You are eligible for the loan.\n");
            } 
			      else {
                printf("You are not eligible for the loan due to a low credit score.\n");
            }
        } 
		    else {
            printf("You are not eligible for the loan due to insufficient income.\n");
        }
    }
	else {
        printf("You are not eligible for the loan due to age restrictions.\n");
    }
    return 0; 
}
