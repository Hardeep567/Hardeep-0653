/*
   Name : Hardeep Naresh
   Date : 26 Sept 2024
   Desc : Eligible for Vote
*/
#include<stdio.h>
int main(){
	int age;
	char citizen[50];
	printf("Enter the age  ");
	scanf("%d", &age);
	printf("Enter the citizenship  ");
	scanf("%s", citizen);
	if(citizen=='Karachi'){
		if(age>=18){
			printf("Eligile for vote");
		}
		else{
			printf("Eligible for vote");
		}
	}
	else{
		printf("This is only for Karachi");
	}
}
