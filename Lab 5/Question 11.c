#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter the Numbers");
	scanf("%d %d %d", &a,&b,&c);
	if(a!=b && b!=c && a!=c ){
	  if(a>b && a>c )
	   printf("first number is greatest %d\n", a);
		else if(b>a && b>c)
	   printf("second number is greatest %d\n", b);
		else 
	   printf("third number is greatest %d\n", c);
	}
	else 
	printf("Number is equal\n");
	return 0;
}
