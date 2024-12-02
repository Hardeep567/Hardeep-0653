#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char title[100];
    char author[100];
    int publicationYear;
} Book;

typedef struct {
    Book* books; 
    int totalBooks;
} Library;

int main() {
    Library* library = (Library*)malloc(sizeof(Library));
    
    library->totalBooks = 5;

    library->books = (Book*)malloc(library->totalBooks * sizeof(Book));


    for (int i = 0; i < library->totalBooks; i++) {
        printf("Enter details for book %d:\n", i + 1);
        printf("Title: ");
        getchar(); 
        scanf("%[^\n]",library->books[i].title );
        printf("Author: ");
        getchar(); 
        scanf("%[^\n]",library->books[i].author);
        printf("Publication Year: ");
        scanf("%d", &library->books[i].publicationYear);
    }

    printf("\nBooks published after the year 2000:\n");
    for (int i = 0; i < library->totalBooks; i++) {
        if (library->books[i].publicationYear > 2000) {
            printf("Title: %s\n", library->books[i].title);
        }
    }
    
    free(library->books);
    free(library);

    return 0;
}
