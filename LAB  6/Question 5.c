#include <stdio.h>

int main() {
    int a=65536,i;
    for(i=1;i<10;i++){
        a=a/i;
        printf("%d,",a);
    }
    return 0;
}
