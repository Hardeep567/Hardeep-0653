#include<stdio.h>

void check(int a){
if(a%2==0){
printf("Even");
}
else{
printf("Odd");
}
}

int main(){
int a,b;
printf("Enter the number\n");
scanf("%d", &a);
check(a);
  return 0;
}
