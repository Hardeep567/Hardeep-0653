/*
 *NAME : HARDEEP NARESH
 *Date : 14 Sept 2024
 *Desc :  Discount Calculator
 */
#include<stdio.h>
int main(){
	float a;
	float b;
	printf("amount");
	scanf("%f", &a);
	if (a>=500 && a<= 2000){
		b=a*0.05;
		b=a-b;
		printf("the price after discount  %f", b);
	}
	else if (a>2000 && a<=4000){
		b=a*0.10;
		b=a-b;
		printf("the discount %f", b);
	}
	else if(a> 4000 && a<= 6000){
		b=a*0.20;
		b=a-b;
		printf("the discount %f", b);
	}
	else {
		b=a*0.35;
		b=a-b;
		printf("the discount is %f", b);
	}
	
}
