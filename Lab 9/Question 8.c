#include<stdio.h>
int add(int num,int num2){
return num+num2;
}
int sub(int num, int num2){
return num-num2;
}
int mult(int num,int num2){
return num*num2;
}
int div(int num,int num2){
return num/num2;
}
int main(){
int num,num2;
printf("Enter the number");
scanf("%d", &num);
printf("Enter the second number\n");
scanf("%d", &num2);
char oper;
printf("Enter the operater");
scanf(" %c", &oper);
switch(oper){
case'+':
printf("The Sum is %d\n", add(num,num2));
break;
case'-':
printf("The difference is %d\n", sub(num,num2));
break;
case'*':
printf("The product is %d\n", mult(num,num2));
break;
case'/':
printf("The Division is %d\n", div(num,num2));
break;
default:
printf("Wrong operater\n");
break;
}
return 0;

}
