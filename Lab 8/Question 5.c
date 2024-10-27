#include<stdio.h>
int main(){
	int n, j, i,a;
	printf("Enter Number of rows: ");
	scanf("%d",&n);
	for(i=1; a>=1; i++)
	{   if(n%2==0)a=n-1;
		else a=n;
		for(j=i; j>=1; j--)
		{
			printf("%d ", a);
			a=a-2;
		}
		printf("\n");
	}
}
