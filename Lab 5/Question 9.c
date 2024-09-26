#include<stdio.h>
int main(){
	int year;
	printf("Enterb the year	");
	scanf("%d", &year);
	if("year%400==0 || (year%100!=0 && year%4==0)"){
		printf("Leap Year");
	}
	else {
		printf("Not Leap Year");
	}
	return 0;
}
