#include <stdio.h>
int sumdigits(int n){
    if(n/10==0){
        return n;
    }
    return n%10+sumdigits(n/10);
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d", sumdigits(n));
    return 0;
}
