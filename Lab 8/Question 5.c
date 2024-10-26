#include <stdio.h>

int main() {
    int num;
    int i,j;
    printf("Enter the number:");
    scanf("%d", &num);
    printf("The ODD is :\n");
    for(i=num;i>=1;i--){
        if(i%2!=0){
            for(j=0;j<i;j++){
            printf("%d", i);
            }
            printf("\n");
        }
    }
   

    return 0;
}
