/*
   Name : Hardeep Naresh
   Date : 26 Sept 2024
   Desc : Number is Zero,Negative and Positive( Even and Odd )
*/
#include<stdio.h>
int main(){
	int Number;
	printf("Enter the number:  ");
	scanf("%d", &Number);
	if (Number==0){
		printf("Number is Zero\n");
	}
	else if(Number<0){
		printf("Number is Negative\n");
	}
	else {
		printf("Number is Positive\n");
		if(Number%2==0){
		    printf("Number is Even\n");
		}
		else{
			printf("Number is Odd\n");
		}
	}
	return 0;
	
}
