#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct player {
    char name[20];
    char team[20];
}player;

typedef struct bowl {
    char type[10]; 
    char arm[5];   
    player ply;
} bowl;

typedef struct bat {
    char type[10]; 
    char handed[8];
    struct bowl ply2;
}bat;

void createRecord() {
    FILE *file = fopen("data.dat", "a");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    bat newBat;
    printf("Enter player name: ");
    scanf("%s", newBat.ply2.ply.name);
    printf("Enter team: ");
    scanf("%s", newBat.ply2.ply.team);
    printf("Enter bowler type (seemer/pacer/spinner/N/A): ");
    scanf("%s", newBat.ply2.type);
    printf("Enter bowling arm (left/right): ");
    scanf("%s", newBat.ply2.arm);
    printf("Enter batting type (top/middle/lower/N/A): ");
    scanf("%s", newBat.type);
    printf("Enter batting handedness (lefty/righty): ");
    scanf("%s", newBat.handed);

    fwrite(&newBat, sizeof(bat), 1, file);
    fclose(file);
    printf("Record added successfully.\n");
}


void readRecords() {
    FILE *file = fopen("data.dat", "r");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    bat readBat;
    while (fread(&readBat, sizeof(bat), 1, file)) {
        printf("\nPlayer Name: %s\n", readBat.ply2.ply.name);
        printf("Team: %s\n", readBat.ply2.ply.team);
        printf("Bowler Type: %s\n", readBat.ply2.type);
        printf("Bowling Arm: %s\n", readBat.ply2.arm);
        printf("Batting Type: %s\n", readBat.type);
        printf("Batting Handedness: %s\n", readBat.handed);
    }

    fclose(file);
}

void updateRecord() {
	char name[50];
	printf("Enter The Name/n");
	scanf("%s", name);
    FILE *file = fopen("data.dat", "r+");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    bat tempBat;
    int found = 0;
    while (fread(&tempBat, sizeof(bat), 1, file)) {
        if (strcmp(tempBat.ply2.ply.name, name) == 0) {
            found = 1;
            fseek(file, -sizeof(bat), SEEK_CUR);

            printf("Enter new team: ");
            scanf("%s", tempBat.ply2.ply.team);
            printf("Enter new bowler type (seemer/pacer/spinner/N/A): ");
            scanf("%s", tempBat.ply2.type);
            printf("Enter new bowling arm (left/right): ");
            scanf("%s", tempBat.ply2.arm);
            printf("Enter new batting type (top/middle/lower/N/A): ");
            scanf("%s", tempBat.type);
            printf("Enter new batting handedness (lefty/righty): ");
            scanf("%s", tempBat.handed);

            fwrite(&tempBat, sizeof(bat), 1, file);
            printf("Record updated successfully.\n");
            break;
        }
    }

    if (found == 0)
        printf("Player not found.\n");

    fclose(file);
}


void deleteRecord() {
	char name[50];
	printf("Enter The Name/n");
	scanf("%s", name);
    FILE *file = fopen("data.dat", "r");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }

    FILE *tempFile = fopen("temp.dat", "w");
    struct bat tempBat;
    int found = 0;
    while (fread(&tempBat, sizeof(bat), 1, file)) {
        if (strcmp(tempBat.ply2.ply.name, name) != 0) {
            fwrite(&tempBat, sizeof(bat), 1, tempFile);
        } else {
            found = 1;
        }
    }

    fclose(file);
    fclose(tempFile);

    remove("data.dat");
    rename("temp.dat", "data.dat");

    if (found != 0)
        printf("Record deleted successfully.\n");
    else
        printf("Player not found.\n");
}

int main() {
    int choice;

    do {
        printf("\nCricket Player Management System\n");
        printf("1. Create Record\n");
        printf("2. Read Records\n");
        printf("3. Update Record\n");
        printf("4. Delete Record\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createRecord();
                break;
            case 2:
                readRecords();
                break;
            case 3:
                updateRecord();
                break;
            case 4:
                deleteRecord();
                break;
            case 5:
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 5);

    return 0;
}
	
	
	
	
	
	
