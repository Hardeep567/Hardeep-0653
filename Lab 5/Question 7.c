/*
   Name : Hardeep Naresh
   Date : 26 Sept 2024
   Desc : Swap the number by XOR
*/
#include<stdio.h>
int main(){
	int a,b;
	printf("Enter first number	 ");
	scanf("%d", &a);
	printf("\nEnter second number	");
	scanf("%d", &b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("The number is now:%d %d", a,b);
	
	return 0;
}
