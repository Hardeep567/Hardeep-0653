#include<stdio.h>
#include<stdlib.h>

void scan(int **arr,int ** arr2,int m,int n){
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d", &arr[i][j]);
		}
	}
	printf("enter the second\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d", &arr2[i][j]);
		}
	}
}

void mult(int **arr,int **arr2,int m,int n){
	int **mult=(int**)calloc(m,sizeof(int *));
	for(int i=0;i<m;i++){
		mult[i]=(int *)calloc(n,sizeof(int *));
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			for(int k=0;k<n;k++){
				mult[i][j]+=arr[i][k]*arr2[k][j];
			}
		}
	}
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("%d ", mult[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int m,n;
	 printf("enter the row");
	scanf("%d", &m);
	printf("Enter the column");
	scanf("%d", &n);
	int **arr=(int**)calloc(m,sizeof(int *));
	for(int i=0;i<m;i++){
		arr[i]=(int *)calloc(n,sizeof(int *));
	}
	int **arr2=(int**)calloc(m,sizeof(int *));
	for(int i=0;i<m;i++){
		arr2[i]=(int *)calloc(n,sizeof(int *));
	}
	scan(arr,arr2,m,n);
	mult(arr,arr2,m,n);
	free(arr);
	free(arr2);
	for(int i=0;i<m;i++){
		free(arr);
		free(arr2);
	}
}
