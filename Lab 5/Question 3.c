/*
   Name : Hardeep Naresh
   Date : 26 Sept 2024
   Desc : Mult: of 3 and 5
*/
#include<stdio.h>
int main(){
	int Number;
	printf("Enter the Number	");
	scanf("%d", &Number);
	if(Number%3==0 && Number%5==0){
		printf("Number is divisible by 3 and 5");
	}
	else {
		printf("Number is not divisible by both");
	}
	return 0;
}
