#include <stdio.h>
int main()
{
	float p;
	float r;
	float t;
	float i;
	float a;
	printf("Enter principle amount");
	scanf("%f",&p);
	printf("Enter interest rate");
	scanf("%f",&r);
	printf("Enter time period");
	scanf("%f",&t);
	r=r/100;
	i=p*r;
	i=i*t;
	a=p+i;
	printf("Total amount");
	printf("%f",a);
}
