#include<stdio.h>
int main(){
	int Number;
	printf("Enter the number: ");
	scanf("%d", &Number);
	Number==0?printf("Number is zero"):Number>0?printf("Number is positive"):printf("Number is negative");
	return 0;
}