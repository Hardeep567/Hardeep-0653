
#include<stdio.h>
#include<string.h>

typedef struct movie{
    char name[30];
    char genre[30];
    char director[30];
    int releaseyear;
    float rating;
} movie;

int main(){
    int i=1;
    movie arr[i];
    strcpy(arr[0].name,"you and me");
    strcpy(arr[0].genre,"Action");
    strcpy(arr[0].director,"Hardeep Naresh");
    arr[0].releaseyear=2023;
    arr[0].rating=4.4\n;
   
    int num;
   
    do{
        printf("\nEnter Number 1.Search 2.Add Movie\n");
    scanf("%d", &num);
    if(num==1){
        char ser[30];
        printf("\nEnter the Genre of :\n");
        getchar();
        scanf(" %s", ser);
        for(int j=0;j<i;j++){
            if(strcmp(arr[j].genre,ser)==0){
                printf("%s\n  %s\n  %s\n  %d\n  %.2f", arr[j].name, arr[j].genre,arr[j].director,arr[j].releaseyear,arr[j].rating);
            }
        }
    }
    else if(num==2){
       printf("Enter The Name of movie");
       fgets(arr[i-1].name,30,stdin);
       getchar();
       printf("Enter The Name of movie genre");
       fgets(arr[i-1].genre,30,stdin);
       getchar();
       printf("Enter The Name of director");
       fgets(arr[i-1].director,30,stdin);
       getchar();
       printf("Enter the year of release and rating");
       scanf("%d", &arr[i-1].releaseyear);
       getchar();
       scanf("%f", &arr[i-1].rating);
       i++;
    }
    }while(num>=1 || num<=2);
    return 0;
}
