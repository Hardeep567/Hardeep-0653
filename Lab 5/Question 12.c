#include<stdio.h>
int main(){
	int a,b,c;
	float d;
	printf("Enter the marks obtain in Assignment");
	scanf("%d", &a);
	printf("Enter total obtain marks of Attendance");
	scanf("%d", &b);
	printf("Enter the marks obtain in  Final Paper");
	scanf("%d", &c);
	d=a*0.40;
	d=d+(b*0.10);
	d=d+(c*0.50);
	if(d>=90)
	printf("A Grade");
	else if(d>=75 && d<90)
	printf("B Grade");
	else if(d>=65 && d<75)
	printf("C Grade");
	else
	printf("Fail need improve");
	
	return 0;
}
