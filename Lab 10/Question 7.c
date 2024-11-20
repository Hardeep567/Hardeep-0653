#include<stdio.h>

const float max_temp=56.1;

void check(float arr[],int n){
	static int count=0;
	for(int i=0;i<n;i++){
		if(arr[i]>max_temp){
			count++;
			printf("%.1f exceeds the limit\n",arr[i]);
		}
	}
	printf("temperature exceeds %d times",count);
	
	return;
}

int main(){
	int n;
	printf("Enter number of temp:");
	scanf("%d",&n);
    float arr[n];
    printf("enter temperature:");
    for(int i=0;i<n;i++){
    	scanf("%f",&arr[i]);
	}
	check(arr,n);
	return 0;
}
