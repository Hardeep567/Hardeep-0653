#include<stdio.h>
#include<string.h>

typedef struct package{
    char name[30];
    char destination[40];
    int duration;
    int cost;
    int seat;
} package;

int main(){
    package arr[3];
    strcpy(arr[0].name,"Dubia is far");
    strcpy(arr[0].destination,"Dubia");
    arr[0].duration=22;
    arr[0].cost=3400;
    arr[0].seat=23;
    strcpy(arr[1].name,"Islamabad is far");
    strcpy(arr[1].destination,"Islamabad");
    arr[1].duration=12;
    arr[1].cost=340;
    arr[1].seat=12;
    strcpy(arr[2].name,"Lahore is far");
    strcpy(arr[2].destination,"Lahore");
    arr[2].duration=11;
    arr[2].cost=400;
    arr[2].seat=13;
    int num,i;
    do{
        printf("Enter one For Display The Package  and two For Book The Seat in package");
        scanf("%d", &num);
        if(num==1){
            printf("%s\n %s\n %d\n %d\n %d\n",arr[0].name,arr[0].destination,arr[0].duration,arr[0].cost,arr[0].seat);
            printf("%s\n %s\n %d\n %d\n %d\n",arr[1].name,arr[1].destination,arr[1].duration,arr[1].cost,arr[1].seat);
            printf("%s\n %s\n %d\n %d\n %d\n",arr[2].name,arr[2].destination,arr[2].duration,arr[2].cost,arr[2].seat);
        }
        else if(num==2){
            printf("Enter the Number of package which you want\n");
            printf("1. %s\n %s\n %d\n %d\n %d\n",arr[0].name,arr[0].destination,arr[0].duration,arr[0].cost,arr[0].seat);
            printf("2. %s\n %s\n %d\n %d\n %d\n",arr[1].name,arr[1].destination,arr[1].duration,arr[1].cost,arr[1].seat);
            printf("3. %s\n %s\n %d\n %d\n %d\n",arr[2].name,arr[2].destination,arr[2].duration,arr[2].cost,arr[2].seat);
			printf("enter the number");
			scanf("%d", &i);
            int j;
            if(i==1){
                printf("Enter The Number of seats");
                scanf("%d", &j);
                arr[0].seat-=j;
                printf("%s\n %s\n %d\n %d\n %d\n",arr[0].name,arr[0].destination,arr[0].duration,arr[0].cost,arr[0].seat);
            }
            else if(i==2){
                printf("Enter The Number of seats");
                scanf("%d", &j);
                arr[1].seat-=j;
                printf("%s\n %s\n %d\n %d\n %d\n",arr[1].name,arr[1].destination,arr[1].duration,arr[1].cost,arr[1].seat);
            }
            else if(i==3){
                printf("Enter The Number of seats");
                scanf("%d", &j);
                arr[2].seat-=j;
                printf("%s\n %s\n %d\n %d\n %d\n",arr[2].name,arr[2].destination,arr[2].duration,arr[2].cost,arr[2].seat);
            }
        }
    }while(num==1 || num==2);
    return 0;
}
