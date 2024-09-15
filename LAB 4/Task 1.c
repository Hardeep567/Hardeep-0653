/*
*Name : Hardeep Naresh
*Date : 09 Sept 2024
*Desc : Calculator
*/
#include<stdio.h>
int main(){
float num1 , num2 , t;
char op;
printf("Enter the Number ");
scanf("%f", & num1);
printf("Enter The Number");
scanf("%f", & num2);
printf("Enter the operator");
scanf(" %c", & op);
if (op == '*'){
 t = num1 * num2;
 printf("%f",t);
}
else if (op == '/'){
 t = num1 / num2;
 printf("%f", t);
}
else if (op == '+'){
 t = num1 + num2;
 printf("%f", t);
}
else if (op =='-'){
 t = num1 - num2;
 printf("%f", t);
}
else{
  printf("not found");
}
return 0;
}

