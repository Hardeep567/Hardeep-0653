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
	printf("Reverse numbers is:");
	for(i=n-1;i>=0;i--){
		printf("%d", arr[i]);
	}
}
