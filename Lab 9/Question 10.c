#include<stdio.h>
int find(int str[],int c){
    int i,min,max;
    min = str[0];
    max = str[0];
    for(i=0;i<c;i++){
        if(min>str[i]){
        min=str[i];
}
if(max<str[i]){
max=str[i];
}
    }
    printf("The Maximum %d", max);
    printf("The Minimum %d", min);
    return 0;
}
int main(){
int num,i;
printf("Enter the Size of array");
scanf("%d", &num);
    int str[num];
    printf("Enter the elments");
    for(i=0;i<num;i++){
    scanf("%d", &str[i]);
}
    find(str,num);
}
