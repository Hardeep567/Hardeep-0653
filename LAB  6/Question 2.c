#include <stdio.h>

int main() {
    int a,b,i;
    printf("Enter the number");
    scanf("%d", &a);
    i=0;
    b=a/10;
    while(b==0 && i<1){
        printf("Number is not mult digit");
        i=i+1;
    }
    while(b!=0 && i<1){
    printf("Number is mult digit");
    i=i+1;
    }
    return 0;
}
