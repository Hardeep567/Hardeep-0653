#include<stdio.h>
int main(){
	int n,i,c=0;
	printf("Enter the size of array");
	scanf("%d", &n);
	int a[n];
	for(i=0;i<n;i++){
		do{
		scanf("%d", &a[i]);
		if(a[i]<0){
			printf("L ha tu");
			return 0;
		}}while(a[i]<0);
	}
	c=a[0];
	for(i=1;i<n;i++){
		if(c<a[i]){
			c=a[i];
		}
	}
	int arr[c+2];
	
	//printf("%d", c);
	for(i=0;i<=c+1;i++){
		arr[i]=0;
	}
	
	for(i=0;i<n;i++){
	
		arr[a[i]]++;
	//	printf("%d", arr[a[i]]);
	}
	
	for(i=0;i<=c+1;i++){
		if(arr[i]>1 ){
			printf("Number is %d %d", i,arr[i]);
		}
	}
}
