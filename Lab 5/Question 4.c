/*
   Name : Hardeep Naresh
   Date : 26 Sept 2024
   Desc : Eligible for Vote
*/
#include<stdio.h>
int main(){
	int age;
	char citizen;
	printf("Enter the age  ");
	scanf("%d", &age);
	printf("Enter the 'y' If you are citizenship and other 'n' ");
	scanf("%s", citizen);
	if(citizen =='y'){
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
