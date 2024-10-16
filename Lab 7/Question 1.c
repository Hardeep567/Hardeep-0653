#include<stdio.h>
int main(){
	int n,i,sum=0;
	printf("Enter the array size");
	scanf("%d", &n);
	int arr[n];
	printf("Enter the number");
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	for(i=0;i<n;i++){
		sum+=arr[i];
	}
	printf("Sum of array is %d", sum);
}
