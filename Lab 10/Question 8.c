#include<stdio.h>
#include<string.h>
struct car{
	char make[20];
	char model[20];
	int year;
	long int price;
	float mileage;
};
int main(){
	int n;
	printf("enter number of cars:");
	scanf("%d",&n);
	struct car car[n];
	for(int i=0;i<n;i++){
		printf("enter car make:");
		scanf("%s",car[i].make);
		printf("Enter car model:");
		scanf("%s",car[i].model);
		printf("enter car year:");
		scanf("%d",&car[i].year);
		printf("enter car price:");
		scanf("%ld",&car[i].price);
		printf("enter car mileage:");
		scanf("%f",&car[i].mileage);
	}
	printf("Available cars:");
	for(int i=0;i<n;i++){
		printf("%s ",car[i].make);
		printf("%s\n",car[i].model);
	}
	char str[30];
	printf("enter car make or model:");
	scanf("%s",str);
	for(int i=0;i<n;i++){
		if(strcmp(car[i].make,str)==0){
	    	printf("%s",car[i].make);
	    	printf("%s",car[i].model);
	    	printf("%d",car[i].year);
			  printf("%ld",car[i].price);
			  printf("%f",car[i].mileage);
      	}
      	else if(strcmp(car[i].model,str)==0){
      		printf("%s",car[i].make);
      		printf("%s",car[i].model);
      		printf("%d",car[i].year);
			    printf("%ld",car[i].price);
			    printf("%f",car[i].mileage);
		 }	
	}
	return 0;
	

}
