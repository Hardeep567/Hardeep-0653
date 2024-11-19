#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct login{
	char name[50];
	char password[50];
}login;

int adminlogin(){
	login str;
	printf("Enter the Username Without Space\n");
	scanf("%s", str.name);
	getchar();
	if(strcmp(str.name,"admin123")!=0) return 0;
	printf("Enter the password\n");
	scanf("%s", str.password);
	if(strcmp(str.password,"765626")==0){
		return 1;
	}
	return 0;
}

void adduser(){
	login str;
	printf("Enter the Username Without Space\n");
	scanf("%s", str.name);
	getchar();
	printf("Enter the password\n");
	scanf("%s", str.password);
	FILE *ptr=fopen("login.txt","a");
	if (ptr == NULL) {
        printf("Error\n");
        return;
    }
	fwrite(&str,sizeof(str),1,ptr);
	fclose(ptr);
	return ;
	
}

void changepassword(){
	login str,str2;
	char change[50];
	printf("Enter the Username Without Space\n");
	scanf("%s", str.name);
	
	printf("Enter the current password\n");
	scanf("%s", str.password);
	
	FILE *ptr=fopen("login.txt","r");
	 if (ptr == NULL) {
        printf("Error\n");
        return;
    }
    FILE *ptr2=fopen("copy.txt","w");
    while(fread(&str2,sizeof(str2),1,ptr)){
    	if (strcmp(str2.name, str.name) == 0 && strcmp(str2.password, str.password) == 0) {
        	printf("Enter the New Password");
        	scanf("%s", change);
        	strcpy(str2.password,change);
		}
			fwrite(&str2,sizeof(str2),1,ptr2);	
	}
	fclose(ptr);
	fclose(ptr2);
	remove("login.txt");
    rename("copy.txt", "login.txt");
    printf("Password changed successfully\n");
	return ;
	
}

void finduser(){
	login str,str2;
	int found=0;
	printf("Enter the Username Without Space\n");
	scanf("%s", str.name);
	
	printf("Enter the password\n");
	scanf("%s", str.password);
	
	
	FILE *ptr=fopen("login.txt","r");
	 if (ptr == NULL) {
        printf("Error\n");
        return;
    }
    int num;
	while(fread(&str2,sizeof(str2),1,ptr)){
		if (strcmp(str2.name, str.name) == 0 && strcmp(str2.password, str.password) == 0) {
            found = 1;
			printf("User is available.\n");
            printf("Enter\n 1.To change the password. \n 2.continous\n");
            scanf("%d", &num);
            if(num==1){
            	fclose(ptr);
            	changepassword();
				return;
			}
            break;
        }
	}
	if(found==0){
		printf("User is not available");
	}
	fclose(ptr);
	return ;
}



int main(){
	login str;
	int num;
	do{
	printf("Enter\n 1. Admin Login \n 4. Registration \n 3. Login \n 4. Exit\n");
	scanf("%d", &num);
	if(num==1){
		int c=adminlogin();
		if(c==1)printf("Yes Your Are the Admin\n");
		else printf("Sorry you are not admin\n");	
	}
	else if(num==2){
		adduser();
		printf("Added Succesfully\n");
	}
	else if(num==3){
		finduser();
	}
	else if(num==4){
		printf("Your exit\n");
		return 0;
	}
	}while(num>=1 && num<=4);
}
