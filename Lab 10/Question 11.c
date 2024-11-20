#include<stdio.h>

void kilometer(int num){
    const float change=1000.0;
    static int count=0;
    printf("In Kilometer %.1f\n", num/change);
    count++;
}

int main(){
    int num,n;
    do{
        printf("Enter number in Meter");
    scanf("%d", &num);
   
    kilometer(num);
   
    printf("Enter one for continous");
    scanf("%d", &n);
   
    }while (n==1);
   
}
