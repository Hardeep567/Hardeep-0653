/*
 *NAME : HARDEEP NARESH
 *Date : 13 Sept 2024
 *Desc : Bill Calculator 
 */
#include<stdio.h>
int main(){
	char a[500];
	char f[500];
	int b;
	float c,d,e;
	printf("Enter your First name");
	scanf("%s", &a);
	printf("Enter your last name");
	scanf("%s", &f);
	printf("Enter id");
	scanf("%d", &b);
	printf("Enter the comused unit");
	scanf("%f", &c);
	if( c<=199 ){
		d=c*16.20;
		printf("\nyour name is %s %s", a,f);
		printf("\nyour id is %d", b);
		printf("\nunit comused by %.3f", c);
		printf("\nAmount charge @16.20 per unit:%.3f", d);
		printf("\nyour net bill is: %.3f", d);
	}
	else if( c>=200 && c<300 ){
		d=c*20.10;
		printf("\nyour name is %s %s", a,f);
		printf("\n your id is %d", b);
		printf("\nunit comused by %.3f", c);
		printf("\nAmount charge @20.10 per unit:%.3f", d);
		printf("\nyour net bill is :%.3f", d);
		
	}
	else if( c>=300 && c<500 ){
		d=c*27.10;
		printf("\nyour name is %s %s", a,f);
		printf("\n your id is %d", b);
		printf("\nunit comused by %.3f", c);
		printf("\nAmount charge @27.10 per unit:%.3f", d);
		printf("\nyour net bill is :%.3f", d);
	}
	else {
		d=c*35.90;
		printf("\nyour name is %s %s", a,f);
		printf("\n your id is %d", b);
		printf("\nunit comused by %.3f", c);
		printf("\nAmount charge @35.90 per unit:%.3f", d);
		if( d>1800 ){
			e=d*0.15;
			printf("\nYour surchange amount %.3f", e);
			printf("\nNet bill you have to paid is:%.3f",e+d);
		}
	}
}
