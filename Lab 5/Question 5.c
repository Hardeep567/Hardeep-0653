/*
   Name : Hardeep Naresh
   Date : 26 Sept 2024
   Desc : Number is greatest by bitiwse operater
*/
#include<stdio.h>
int main(){
	int a,b;
	printf("Enter first number  ");
	scanf("%d", &a);
	printf("Enter second number  ");
	scanf("%d", &b);
	a==b?printf("Number is equal"):a>b?printf("%d is greatest\n",a):printf("%d is greatest\n",b);
	return 0;
}
