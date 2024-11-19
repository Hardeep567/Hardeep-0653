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
	if(strcmp(str.name,"admin123")!=0) return 0;
	printf("Enter the password\n");
	scanf("%d", &str.password);
	if(str.password=="765626"){
		return 1;
	}
	return 0;
}

void adduser(){
	login str;
	printf("Enter the Username Without Space\n");
	scanf("%s", str.name);
	printf("Enter the password\n");
	scanf("%d", str.password);
	FILE *ptr=fopen("login.txt","a");
	if (ptr == NULL) {
        printf("Error: Unable to open file for reading.\n");
        return;
    }
	fwrite(&str,sizeof(str),1,ptr);
	fclose(ptr);
	return ;
	
}

void finduser(){
	login str,str2;
	printf("Enter the Username Without Space\n");
	scanf("%s", str.name);
	getchar();
	printf("Enter the password\n");
	scanf("%s", str.password);
	FILE *ptr=fopen("login.txt","r");
	 if (ptr == NULL) {
        printf("Error: Unable to open file for reading.\n");
        return;
    }
	while(fread(&str2,sizeof(str2),1,ptr)){
		if (strcmp(str2.name, str.name) == 0 && strcmp(str2.password, str.password) == 0) {
            printf("Login successful! User is available.\n");
            break;
        }
	}
	fclose(ptr);
	return ;
}

int main(){
	login str;
	int num;
	do{
	printf("Enter\n 1. Admin Login \n 2. Resigration \n 3. Login \n 4. Exist\n");
	scanf("%d", &num);
	if(num==1){
		int c=adminlogin();
		if(c==1)printf("Yes Your Are the Admin\n");
		else printf("Sorry you are not admin\n");	
	}
	else if(num==2){
		adduser();
		printf("Login Succesfully\n");
	}
	else if(num==3){
		finduser();
	}
	else if(num==4){
		printf("Thanks\n");
		return 0;
	}
	}while(num>=1 && num<=4);
}
