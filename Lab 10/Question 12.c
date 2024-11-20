#include<stdio.h>

void func(int arr[],int n,int x,int i){
	if(n>i){
		if(arr[i]!=x){
			i++;
			func(arr,n,x,i);
	    
		}
		else{
			printf("the number:%d is present in array at index:%d",x,i);
			return;
		}
    }
    else{
    	printf("not present");
	}
	return;
}
int main(){
	int n,x;
	int i=0;
	printf("enter size:");
	scanf("%d",&n);
	printf("enter the number which you want to find:");
	scanf("%d",&x);
	int arr[n];
	printf("enter elements:");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	func(arr,n,x,i);
	return 0;
}
