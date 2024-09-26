#include<stdio.h>
int main(){
	int number, sum, mod_value;
	printf("Enter the year	");
	scanf("%d", &number);
	while(number>0){
		mod_value=number%10;
		number=number/10;
		sum +=mod_value;
	}
	printf("Sum of digit is:%d", sum);
	return 0;
}
