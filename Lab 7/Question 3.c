#include<stdio.h>
int main(){
	int n,i,max,min;
	printf("Enter the array size");
	scanf("%d", &n);
	int arr[n];
	printf("Enter the number");
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	max=arr[0];
	min=arr[0];
	for(i=n-1;i>=0;i--){
		if(max<arr[i]){
			max=arr[i];
		}
		if(min>arr[i]){
			min=arr[i];
		}
	}
	printf("Minimum Number: %d\n", min);
	printf("Maximum Number: %d", max);
}
