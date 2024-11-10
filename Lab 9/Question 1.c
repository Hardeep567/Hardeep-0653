#include<stdio.h>

int mult(int a,int b){
int t=a*b;
return t;
}

int main(){
int a,b;
  
printf("Enter the number");
scanf("%d", &a);
printf("Enter the second number");
scanf("%d", &b);
int c=mult(a,b);
printf("Answer is %d", c);
  return 0;
}
