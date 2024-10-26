#include <stdio.h>

int main() {
   int i,j,k,h;
   int arr[3][3];
   int arr2[3][3];
   printf("Enter the elment of martic\n");
   for(i=0;i<3;i++){
       for(j=0;j<3;j++){
           scanf("%d", &arr[i][j]);
       }
   }
   for(i=2,k=2;i>=0;i--,k--){
       for(j=2,h=2;j>=0;j--,h--){
           arr2[k][h]=arr[i][j];
       }
   }
   for(k=0;k<3;k++){
       printf("|");
       for(h=0;h<3;h++){
           printf(" %d|", arr2[h][k]);
       }
       printf("\n");
   }
    return 0;
}
