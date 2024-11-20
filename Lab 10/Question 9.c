#include<stdio.h>
void print(int arr[],int n,int k){
	if(k<n){
		printf("%d ",arr[k]);
		k++;
		print(arr,n,k);
	}
	return;
}

void func(int arr[],int n,int i,int j){
    if(j==n){
    	i++;
    	j=i+1;
	}
	if(i<n-1){
		if(arr[i]>=arr[j]){
			int temp;
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
					
			j++;
			func(arr,n,i,j);
		}
		else{
			j++;
			func(arr,n,i,j);
		}
	}
	else{       
		int k=0;
		print(arr,n,k);
	}
}
int main(){  
	int i=0,j=1;
	int n;
	printf("enter size:");
	scanf("%d",&n);
	int arr[n];
	printf("enter elements:");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	func(arr,n,i,j);
	return 0;	
}
