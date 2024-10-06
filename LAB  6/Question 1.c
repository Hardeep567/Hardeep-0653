Do While will best for it and here is program:
#include <stdio.h>

int main() {
    int a=0,b=0;
    do{printf("Enter the number");
    scanf("%d", &a);
    b+=a;
    printf("Sum %d\n",b);
    }while(a!=0);
    printf("Program end");
    return 0;
}
