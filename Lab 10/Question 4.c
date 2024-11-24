#include <stdio.h>
#include <string.h>

typedef struct movie
{
    char name[30];
    char genre[30];
    char director[30];
    int releaseyear;
    float rating;
} movie;

int main()
{
    int i = 1;
    movie arr[i];
    strcpy(arr[0].name, "you and me");
    strcpy(arr[0].genre, "Action");
    strcpy(arr[0].director, "Ansh Kumar");
    arr[0].releaseyear = 2023;
    arr[0].rating = 4.4;
    int j;

    int num;

    do
    {
        printf("Enter Number 1.Search 2.Add Movie 3.Exit\n");
        scanf("%d", &num);
        if (num == 1)
        {
            char ser[30];
            printf("\nEnter the Genre of :\n");
            getchar();
            scanf(" %s", ser);
            for (j = 0; j < i; j++)
            {
                if (strcmp(arr[j].genre, ser) == 0)
                {
                    printf("%s\n  %s\n  %s\n  %d\n  %.2f\n", arr[j].name, arr[j].genre, arr[j].director, arr[j].releaseyear, arr[j].rating);
                }
            }
        }
        else if (num == 2)
        {
        	getchar();
        	
            printf("Enter The Name of movie: ");
			scanf("%[^\n]s",arr[i - 1].name);
            getchar();
            
            printf("Enter The Name of movie genre: ");
			scanf("%[^\n]s",arr[i - 1].genre);
            getchar();
            
            printf("Enter The Name of director: ");
			scanf("%[^\n]s",arr[i - 1].director);
            getchar();
            
            printf("Enter the year of release and rating: ");
            scanf("%d", &arr[i - 1].releaseyear);
            getchar();
            
            scanf("%f", &arr[i - 1].rating);
            
            i++;
        }
    } while (num >= 1 && num <= 2);
    return 0;
}
