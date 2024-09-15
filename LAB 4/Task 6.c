/*
 *NAME : HARDEEP NARESH
 *Date : 14 Sept 2024
 *Desc :  Number less 9
 */
#include <stdio.h>
int main(){
	int n;
	printf("Enter the Postive Integer\n");
	scanf("%d", &n);
    if (n >= 1 && n <= 9) {
        switch (n) {
            case 1: 
			printf("one\n"); 
			break;
            case 2:
			 printf("two\n");
			  break;
            case 3:
			 printf("three\n");
			  break;
            case 4:
			 printf("four\n");
			  break;
            case 5:
			 printf("five\n");
			  break;
            case 6:
			 printf("six\n");
			  break;
            case 7:
			 printf("seven\n");
			  break;
            case 8:
			 printf("eight\n");
			  break;
            case 9:
			 printf("nine\n");
			  break;
            default: 
                break;
        }
    } else {
        printf("greater than 9\n");
    }
}
