#include<stdio.h>
#include<stdlib.h>

void sum(int *ptr,int n){
	int sum = 0,i;
	int arr[n];
	for(i = 0; i < n; i++){
		sum += ptr[i];
	}
	
	printf("Sum: %d",sum);
	
}

int main(){
	int n ,i; 
	printf("Enter size of array: ");
	scanf("%d",&n);
	
	int *arr=(int *)calloc(n,sizeof(int));
	
	printf("Enter numbers : ");
	for(i = 0; i < n; i++){
		scanf("%d",&arr[i]);	
	}

	sum(arr,n);
	
}
