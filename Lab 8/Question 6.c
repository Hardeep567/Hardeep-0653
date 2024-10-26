#include<stdio.h>
int main(){
    int i,j,k,c,arr[3][3];
    int a[3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    c=arr[0][0];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(c>arr[i][j]){
                c=arr[i][j];
            }
        }
        a[i]=c;
        c=arr[i+1][0];
    }
    c=a[0];
    for(i=0;i<3;i++){
        if(c<a[i]){
            c=a[i];
        }
    }
    printf("Saddle point is = %d", c);
}
