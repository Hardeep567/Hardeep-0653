#include<stdio.h>
#include<stdlib.h>
typedef struct student{
	int marks;
} student;

int main(){
	int n;
	float sum =0 ;
	printf("Enter the size");
	scanf("%d", &n);
	student *ptr=(student *)malloc(sizeof(student) * n);
	for(int i=0;i<n;i++){
		printf("Enter the element");
		scanf("%d", &ptr[i].marks);
	}
	for(int i=0;i<n;i++){
		sum+=ptr[i].marks;	
	}
	printf("Average %.2f", sum/n);
}
