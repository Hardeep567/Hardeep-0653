#include<stdio.h>
int main(){
    int i,j,k,c,arr[3][3];
    int a[3],n[3];
    int found=0;
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
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(c<arr[j][i]){
                c=arr[j][i];
            }
        }
        n[i]=c;
        c=arr[0][i+1];
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
        if(a[i]==n[j]){
            printf("%d", a[i]);
            found=1;
            n[j]=-99;
        }
        }
    }
    if(found==0)printf("No Saddle point");
}
