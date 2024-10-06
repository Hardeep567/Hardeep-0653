#include <stdio.h>

int main() {
    int a=1,b=2,i=1;
    int mult;
    printf("The number is 1,2");
    while(i<8){
    mult=a*b;
    printf(",%d", mult);
    a=b;
    b=mult;
    i=i+1;
    }
    return 0;
}
