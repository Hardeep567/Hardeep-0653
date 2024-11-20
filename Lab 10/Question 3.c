#include<stdio.h>
#include<string.h>
struct information{
	int flight;
	char dep_city[56];
	char des_city[56];
	char date[14];
	int no_of_seats;
};

int main(){
	struct information airlines[2];
	
	
	airlines[0].flight=243;
    strcpy(airlines[0].dep_city,"karachi");
    strcpy(airlines[0].des_city,"london");
    strcpy(airlines[0].date,"20_4_2025");
    airlines[0].no_of_seats=34;

    airlines[1].flight=467;
    strcpy(airlines[1].dep_city,"france");
    strcpy(airlines[1].des_city,"abu dhabi");
    strcpy(airlines[1].date,"1_1_2026");
    airlines[1].no_of_seats=65;
    
    for(int i=0,j=1;i<2;i++,j++){
	printf("\n%d.%d\n",j,airlines[i].flight);
	printf("%s\n",airlines[i].dep_city);
	printf("%s\n",airlines[i].des_city);
	printf("%s\n",airlines[i].date);
	printf("%d\n",airlines[i].no_of_seats);
    }
    int choose;
    printf("\nSelect one of them 1-2:");
    scanf("%d",&choose);
    printf("%d in this flight your seat is booked\n",airlines[choose-1].flight);
	return 0;
    
}
