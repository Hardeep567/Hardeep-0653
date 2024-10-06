#include <stdio.h>

int main() {
    int a=1,b=2,i=0;
    int sum;
    printf("The number is 1,2");
    while(i<4){
        sum=a+b;
        printf(",%d", sum );    
        a=b;
        b=sum;
        i=i+1;
    }
    return 0;
}
