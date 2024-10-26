#include<stdio.h>
int main(){
    int num,arr[3][3];
    int arr2[3][3];
    int i,j,k;
    int arr3[3][3]={0};
    printf("Enter the Elment of matrix 1\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
         scanf("%d", &arr[i][j]);  
        }
    } 
    printf("Enter the Elment of matrix 2\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
         scanf("%d", &arr2[i][j]);  
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                arr3[i][j]+=arr[i][k]+arr2[k][j];
            }
        }
    }
    for(i=0;i<3;i++){
        printf("|");
        for(j=0;j<3;j++){
            printf("%d|",arr3[i][j]);
        }
        printf("\n");
    }
   

    return 0;
}
