#include <stdio.h>

int main() {
    int num,count=0;
    int i,j,k=0;
    printf("Enter the number:");
    scanf("%d", &num);
    int arr[num];
    for(i=2;i<num;i++){
        for(j=2;j<i;j++){
           if(i%j==0){
               k=-99;
               break;
           }
        }
        if(k==0){
            arr[count]=i;
            count ++;
        }
        k=0;
    }
    printf("The prime less than %d is :", num);
    for(i=0;i<count;i++){
        printf(" %d", arr[i]);
    }

    return 0;
}
