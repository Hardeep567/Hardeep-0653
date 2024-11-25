#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<windows.h>

float totalPrice = 0;


typedef struct login{
	char name[50];
	char password[50];
}login;

typedef struct datastoring{
	char name[50];
	char password[50];
	float total[5];
	int date[5][3];	
} data;

// ------------------->Discount<----------------------
int discountofbulk(int Price){
	if (Price >= 10000){
		printf("You get 10 percentage discount");
		return Price -(Price*0.10);
	}
	
	else if (Price > 1000){
		printf("You get 100 RS discount");
		return Price - 100;
	}

	return Price;
	
}
// ------------------->Payment System<----------------------
int paymentsystem(){
	int choice;

	while(1){
	printf("Enter\n");
	printf("1. Atm Card\n");
	printf("2. Cash\n");
	printf("3. Online Payment\n");
	printf("4. EXIST\n");
	scanf("%d", &choice);
	
	switch(choice){
		case 1:
			printf("Give your card\n");
			Sleep(1000);
			printf("THANKS FOR BUYING");
			Sleep(1000);
			return 0;
		case 2:
			printf("Give Cash\n");
			Sleep(1000);
			printf("THANKS FOR BUYING");
			Sleep(1000);
			return 0;
		case 3:
			printf("Account Number is 234509\n");
			Sleep(1000);
			printf("THANKS FOR BUYING");
			Sleep(1000);
			return 0;
		case 4:
			printf("Your Order is cancell");
			Sleep(10);
			return 1;
		default:
			printf("WRONG OPTION");
			break;
		}
	}
}

// ------------------->Admin Checking<----------------------
void adminchecking(){
	system("cls");
	data copy;
	FILE * ptr=fopen("FastFood.txt","r");
	while(fscanf(ptr,"%s %s  %f  %f  %f  %f  %f %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",copy.name,copy.password,&copy.total[0],&copy.total[1],&copy.total[2],
		&copy.total[3],&copy.total[4],&copy.date[0][0],&copy.date[0][1],&copy.date[0][2],&copy.date[1][0],
		&copy.date[1][1],&copy.date[1][2],&copy.date[2][0],&copy.date[2][1],&copy.date[2][2],&copy.date[3][0],&copy.date[3][1],&copy.date[3][2],
		&copy.date[4][0],&copy.date[4][1],&copy.date[4][2]) != EOF) {
			printf("User Name: %s ",copy.name);
			printf("User Password: %s \n",copy.password);
		
		if(copy.total[0] != 0){
			printf("Order is 1  %.1f \n",copy.total[0]);
			printf("Day of order 1 is : %d %d %d\n",copy.date[0][0],copy.date[0][1],copy.date[0][2]);
		}
		
		if(copy.total[1] != 0){
			printf("Order is 2  %.1f \n",copy.total[1]);
			printf("Day of order 2 is : %d %d %d\n",copy.date[1][0],copy.date[1][1],copy.date[1][2]);
		}
		
		if(copy.total[2] != 0){
			printf("Order is 3  %.1f \n",copy.total[2]);
			printf("Day of order 3 is : %d %d %d\n",copy.date[2][0],copy.date[2][1],copy.date[2][2]);
		}
		
		if(copy.total[3] != 0){
			printf("Order is 4  %.1f \n",copy.total[3]);
			printf("Day of order 4 is : %d %d %d\n",copy.date[3][0],copy.date[3][1],copy.date[3][2]);
		}
		
		if(copy.total[4] != 0){
			printf("Order is 5  %.1f \n",copy.total[4]);
			printf("Day of order 5 is : %d %d %d\n",copy.date[4][0],copy.date[4][1],copy.date[4][2]);
		}
	}
}

// ------------------->Storing Order Detail<----------------------
void storing(char str[], char password[], float totalPrice) {
    data copy;
    int found = 0, stored = 0;
	system("cls");
    FILE *ptr = fopen("FastFood.txt", "a+");
    FILE *ptr2 = fopen("CopyFastFood.txt", "w");
    if (ptr == NULL || ptr2 == NULL) {
        printf("Error opening file.\n");
        return;
    }
	
	time_t current_time;
    time(&current_time);

    struct tm *local_time = localtime(&current_time);
	
    int year = local_time->tm_year + 1900;
    int month = local_time->tm_mon + 1;
    int date = local_time->tm_mday;
	Sleep(1000);
    while (fscanf(ptr, "%s %s %f %f %f %f %f %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", copy.name, copy.password, 
           &copy.total[0], &copy.total[1], &copy.total[2], 
           &copy.total[3], &copy.total[4],&copy.date[0][0],&copy.date[0][1],&copy.date[0][2],&copy.date[1][0],
		   &copy.date[1][1],&copy.date[1][2],&copy.date[2][0],&copy.date[2][1],&copy.date[2][2],&copy.date[3][0],&copy.date[3][1],&copy.date[3][2],
		   &copy.date[4][0],&copy.date[4][1],&copy.date[4][2]) != EOF) {
        if (strcmp(copy.name, str) == 0 && strcmp(copy.password, password) == 0) {
            stored = 1;
            for (int i = 0; i < 5; i++) {
                if (copy.total[i] == 0) {
                    copy.total[i] = totalPrice;
                    copy.date[i][0]=date;
                    copy.date[i][1]=month;
                    copy.date[i][2]=year;
                    found = 1;
                    break;
                }
            }
            
            if (found == 0) {
                for (int i = 1; i < 5; i++) {
                    copy.total[i - 1] = copy.total[i];
                    copy.date[i-1][0]= copy.date[i][0];
                    copy.date[i-1][1]= copy.date[i][1];
                    copy.date[i-1][2]= copy.date[i][2];
                }
                copy.total[4] = totalPrice;
                copy.date[4][0]=date;
                copy.date[4][1]=month;
                copy.date[4][2]=year;
            }
        }
        fprintf(ptr2, "%s %s %.2f %.2f %.2f %.2f %.2f %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d\n",
                copy.name, copy.password,
                copy.total[0], copy.total[1], copy.total[2],
                copy.total[3], copy.total[4],copy.date[0][0],copy.date[0][1],copy.date[0][2],copy.date[1][0],
				copy.date[1][1],copy.date[1][2],copy.date[2][0],copy.date[2][1],copy.date[2][2],copy.date[3][0],copy.date[3][1],copy.date[3][2],
				copy.date[4][0],copy.date[4][1],copy.date[4][2]);
    }

    if (stored == 0) {
        strcpy(copy.name, str);
        strcpy(copy.password, password);
        copy.date[0][0]=date;
        copy.date[0][1]=month;
        copy.date[0][2]=year;
        copy.total[0] = totalPrice;
        fprintf(ptr2, "%s %s %.2f %.2f %.2f %.2f %.2f %d %d %d\n",
                copy.name, copy.password,
                copy.total[0], copy.total[1], copy.total[2],
                copy.total[3], copy.total[4],copy.date[0][0],copy.date[0][1],copy.date[0][2]);
    }

    fclose(ptr);
    fclose(ptr2);
    remove("FastFood.txt");
    rename("CopyFastFood.txt", "FastFood.txt");
}

// ------------------->Printing Menu of Fast Food Restaurant<----------------------
void Menufast() {
	system("cls");
	
	printf("     *************\n");
	printf("     *    -------------------------    *\n");
	printf("     *    WELCOME TO THE RESTAURANT    *\n");
	printf("     *    -------------------------    *\n");
	printf("     *************\n\n\n");
	
    printf("  ----------- \n");
    printf("| OUR MENU IS |\n");
    printf("  ----------- \n");
    printf("1. Burger\n");
    printf("2. Bar BQ\n");
    printf("3. Pizza \n");
    printf("4. Roll \n");
    printf("5. Juice\n");
    printf("6. Ice Cream\n");
    printf("7. BACK \n");

}

// ------------------->Selecting Item<----------------------
void selectItem(const char* itemName, float pricePerUnit) {
    int quantity;
    printf("Enter quantity for %s: ", itemName);
    scanf("%d", &quantity);
    
	if (quantity > 0) {
        float itemTotal = quantity * pricePerUnit;
        totalPrice += itemTotal;
		system("cls");
        printf("YOUR TOTAL BILL IS : %.2f \n\n\n",itemTotal);
    }
	
	else {
        printf("Invalid quantity \n");
    }
    
    return ;
}

// ------------------->Printing Burger Menu<----------------------
void BurgerMenu() {
	system("cls");
    
	int choice;
    printf("BURGER MENU :\n");
    printf("\n");
    printf("1. Zinger Burger - 450 \n");
    printf("2. Chicken Burger - 400 \n");
    printf("3. Cheese Burger - 370 \n");
    printf("4. Veggie Burger - 350 \n");
    printf("5. Back to Main Menu \n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            selectItem("Zinger Burger", 450);
            break;
        case 2:
            selectItem("Chicken Burger", 400);
            break;
        case 3:
            selectItem("Cheese Burger", 370);
            break;
        case 4:
            selectItem("Veggie Burger", 350);
            break;
        case 5:
            return;
        default:
            printf("Invalid choice.\n");
    }
}

// ------------------->Printing BARBQ Menu<----------------------
void BarBQMenu() {
	system("cls");
    
	int choice;
    printf("BAR BQ MENU :\n");
    printf("\n");
    printf("1. Chicken Tikka - 540 \n");
    printf("2. Beef Kebab - 500 \n");
    printf("3. Fried Fish - 1200 \n");
    printf("4. Back to Main Menu\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            selectItem("Chicken Tikka", 540);
            break;
        case 2:
            selectItem("Beef Kebab", 500);
            break;
        case 3:
            selectItem("Fried Fish", 1200);
            break;
        case 4:
            return;
        default:
            printf("Invalid choice \n");
    }
}

// ------------------->Printing Pizza Menu<----------------------
void PizzaMenu() {
	system("cls");
    int choice;
    
	printf("PIZZA MENU :\n");
    printf("\n");
    printf("1. Chicken Fatjita - 1200 \n");
    printf("2. Chicken Tikka  - 1100 \n");
    printf("3. BBQ Chicken - 1150 \n");
    printf("4. Achari - 1000 \n");
    printf("5. Back to Main Menu\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            selectItem("Chicken Fatjita Pizza", 1200);
            break;
        case 2:
            selectItem("Chicken Tikka Pizza", 1100);
            break;
        case 3:
            selectItem("BBQ Chicken Pizza", 1150);
            break;
        case 4:
            selectItem("Achari Pizza", 1000);
            break;
        case 5:
            return;
        default:
            printf("Invalid choice \n");
    }
}

// ------------------->Printing Roll Menu<----------------------
void RollMenu() {
	system("cls");
    
	int choice;
    printf("ROLL MENU :\n");
    printf("*\n");
    printf("1. Chicken Roll - 170 \n");
    printf("2. Beef Roll - 350 \n");
    printf("3. Zinger Roll - 250 \n");
    printf("4. Back to Main Menu\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            selectItem("Chicken Roll", 170);
            break;
        case 2:
            selectItem("Beef Roll", 350);
            break;
        case 3:
            selectItem("Zinger Roll", 250);
            break;
        case 4:
            return;
        default:
            printf("Invalid choice \n");
    }
}

// ------------------->Printing Juice Menu<----------------------
void JuiceMenu() {
	system("cls");
    int choice;
    
	printf("JUICE MENU :\n");
    printf("\n");
    printf("1. Orange Juice - 150 \n");
    printf("2. Apple Juice - 170 \n");
    printf("3. Mango Juice - 150 \n");
    printf("4. Pineapple Juice - 200 \n");
    printf("5. Back to Main Menu\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            selectItem("Orange Juice", 150);
            break;
        case 2:
            selectItem("Apple Juice", 170);
            break;
        case 3:
            selectItem("Mango Juice", 150);
            break;
        case 4:
            selectItem("Pineapple Juice", 200);
            break;
        case 5:
            return;
        default:
            printf("Invalid choice.\n");
    }
}

// ------------------->Printing ICECREAM Menu<----------------------
void IceCreamMenu() {
	system("cls");
    int choice;
    
	printf("ICE CREAM MENU :\n");
    printf("\n");
    printf("1. Chocolate - 150 \n");
    printf("2. Vanilla - 170 \n");
    printf("3. Strawberry - 150 \n");
    printf("4. Mango - 200 \n");
    printf("5. Back to Main Menu\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            selectItem("Chocolate Ice Cream", 150);
            break;
        case 2:
            selectItem("Vanilla Ice Cream", 170);
            break;
        case 3:
            selectItem("Strawberry Ice Cream", 150);
            break;
        case 4:
            selectItem("Mango Ice Cream", 200);
            break;
        case 5:
            return;
        default:
            printf("Invalid choice.\n");
    }
}

// ------------------->Printing Fast Food<----------------------
void fastfood(char str[],char password[]){
	system("cls");
	int choice;
	int c;
    
	while(1){
        Menufast();
        printf("\nEnter your choice : ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                BurgerMenu();
                break;
            case 2:
                BarBQMenu();
                break;
            case 3:
                PizzaMenu();
                break;
            case 4:
                RollMenu();
                break;
            case 5:
                JuiceMenu();
                break;
            case 6:
                IceCreamMenu();
                break;
            case 7:
            	totalPrice = discountofbulk(totalPrice);
                printf("\nTotal Order Prize : %.2f\n", totalPrice);
                c = paymentsystem();
				if(c == 0)storing(str,password,totalPrice);
				
				return ;
            default:
                printf("Invalid choice - Try Again \n\n\n");
        } 
    }
    return ;
}

// ------------------->Printing Menu of Restaurant Desi<----------------------
void Menudesi() {
	system("cls");
	
	printf("     *************\n");
	printf("     *    ----------------------------     *\n");
	printf("     *    WELCOME TO THE RESTAURANT 02     *\n");
	printf("     *    ----------------------------     *\n");
	printf("     *************\n\n\n");
    
    printf("  ----------- \n");
    printf("| OUR MENU IS |\n");
    printf("  ----------- \n");
    printf("1. Karahi \n");
    printf("2. Bar BQ\n");
    printf("3. Daal \n");
    printf("4. Paratha \n");
    printf("5. Juice\n");
    printf("6. Ice Cream\n");
    printf("7. BACK \n");
}

// ------------------->Printing Karachi Menu<----------------------
void KarahiMenu() {
    int choice;
    system("cls");
    
	printf("KARAHI MENU :\n");
    printf("\n");
    printf("1. Special Karahi - 1200 \n");
    printf("2. Motton Karahi - 1750 \n");
    printf("3. Beef Karahi - 1950 \n");
    printf("4. Chicken Karahi -1400 \n");
    printf("5. Back to Main Menu \n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            selectItem("Special Karahi", 1200);
            break;
        case 2:
            selectItem("Motton Karahi", 1750);
            break;
        case 3:
            selectItem("Beef Karahi ", 1950);
            break;
        case 4:
            selectItem("Chicken Karahi", 1400);
            break;
        case 5:
            return;
        default:
            printf("Invalid choice.\n");
    }
}

// ------------------->Printing BAR BQ Menu of Desi<----------------------
void BarBQMenudesi() {
    int choice;
    system("cls");
    
	printf("BAR BQ MENU :\n");
    printf("\n");
    printf("1. Chicken Tikka - 320 \n");
    printf("2. Reshmi Kebab - 190 \n");
    printf("3. Chicken Behari Boti - 300 \n");
    printf("4. Back to Main Menu\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            selectItem("Chicken Tikka", 320);
            break;
        case 2:
            selectItem("Reshmi Kebab", 190);
            break;
        case 3:
            selectItem(" Chicken Behari Boti", 300);
            break;
        case 4:
            return;
        default:
            printf("Invalid choice \n");
    }
}

// ------------------->Printing DAAL Menu<----------------------
void DaalMenu() {
    int choice;
    system("cls");
    
	printf("PIZZA MENU :\n");
    printf("\n");
    printf("1. 1KG Channa Daal - 850 \n");
    printf("2. 1KG Masoor Daal - 950 \n");
    printf("3. 1KG Moong Daal - 920 \n");
    printf("4. 1KG Anda Daal - 1050 \n");
    printf("5. Back to Main Menu\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            selectItem("Channa Daal", 850);
            break;
        case 2:
            selectItem("Masoor Daal", 950);
            break;
        case 3:
            selectItem("Moong Daal",920);
            break;
        case 4:
            selectItem("Anda Daal", 1050);
            break;
        case 5:
            return;
        default:
            printf("Invalid choice \n");
    }
}

// ------------------->Printing Paratha Menu<----------------------
void ParathaMenu() {
    int choice;
    system("cls");
    
	printf("PARATHA MENU :\n");
    printf("\n");
    printf("1. Simple Paratha - 50 \n");
    printf("2. Aloo Paratha - 100 \n");
    printf("3. Lachaa Paratha - 90 \n");
    printf("4. Back to Main Menu \n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            selectItem("Simple Paratha", 50);
            break;
        case 2:
            selectItem("Aloo Paratha", 100);
            break;
        case 3:
            selectItem("Lachaa Paratha", 90);
            break;
        case 4:
            return;
        default:
            printf("Invalid choice \n");
    }
}

// ------------------->Printing Juice Menu of Desi<----------------------
void JuiceMenudesi() {
    int choice;
    system("cls");
    
	printf("JUICE MENU :\n");
    printf("\n");
    printf("1. Banana Juice - 160 \n");
    printf("2. Apple Juice - 180 \n");
    printf("3. Pineapple Juice - 200 \n");
    printf("4. Peach Juice - 250 \n");
    printf("5. Back to Main Menu\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            selectItem("Banana Juice", 160);
            break;
        case 2:
            selectItem("Apple Juice", 180);
            break;
        case 3:
            selectItem("Pineapple Juice", 200);
            break;
        case 4:
            selectItem("Peach Juice", 250);
            break;
        case 5:
            return;
        default:
            printf("Invalid choice.\n");
    }
}

// ------------------->Printing Icecream Menu of Desi<----------------------
void IceCreamMenudesi() {
    int choice;
    system("cls");
    
	printf("ICE CREAM MENU :\n");
    printf("\n");
    printf("1. Chocolate - 150 \n");
    printf("2. Butter Pecan - 210 \n");
    printf("3. Strawberry - 150 \n");
    printf("4. Cherry - 190 \n");
    printf("5. Back to Main Menu\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            selectItem("Chocolate Ice Cream", 150);
            break;
        case 2:
            selectItem("Butter Pecan ", 210);
            break;
        case 3:
            selectItem("Strawberry Ice Cream", 150);
            break;
        case 4:
            selectItem("Cherry Ice Cream", 190);
            break;
        case 5:
            return;
        default:
            printf("Invalid choice.\n");
    }
}

// ------------------->Printing Desi Food<----------------------
void desifood(char str[],char password[]){
	int choice;
	int c;
	
	system("cls");
    
	while(1){
        Menudesi();
        printf("\nEnter your choice : ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                KarahiMenu();
                break;
            case 2:
                BarBQMenudesi();
                break;
            case 3:
                DaalMenu();
                break;
            case 4:
                ParathaMenu();
                break;
            case 5:
                JuiceMenudesi();
                break;
            case 6:
                IceCreamMenudesi();
                break;
            case 7:
            	totalPrice = discountofbulk(totalPrice);
                printf("\nTotal Order Prize : %.2f\n", totalPrice);
                c = paymentsystem();
				if(c == 0)storing(str,password,totalPrice);
                return ;
            default:
                printf("Invalid choice - Try Again \n\n\n");
        } 
    }
    return;
}

// ------------------->Printing Start System<----------------------
void continuous(char str[],char password[]){
	int num;
	system("cls");

	printf("     *************\n");
	printf("     *    -------------------------    	*\n");
	printf("     *    WELCOME TO THE SYSTEM    		*\n");
	printf("     *    -------------------------    	*\n");
	printf("     *************\n\n\n");

	do{
	printf("Enter Number \n");
	printf("1. FAST FOOD\n");
	printf("2. DESI FOOD\n");
	printf("3. Exist\n");
	scanf("%d", &num);
	
		if( num == 1){
		fastfood(str,password);
		return ;
		}
	
		else if( num == 2){
		desifood(str,password);
		return ;
		}

		else if( num == 3){
		return ;
		}

		else {
		printf("Wrong Option\n");
		}
	}while(1);
}


// ------------------->Printing Admin Login<----------------------
void adminlogin(){
	system("cls");
	login str;
	printf("Enter the Username Without Space\n");
	scanf("%49s", str.name);
	getchar();
	
	if(strcmp(str.name,"admin123")!=0) {
		printf("You are not an admin");
		return ;
	}
	
	printf("Enter password\n");
	scanf("%s", str.password);
	
	if(strcmp(str.password,"765626")==0){
		adminchecking();
		return ;
	}
	printf("Your are not an admin");
	
	return ;
}

// ------------------->Checking User<----------------------
int checkuser(char str[], char password[]){
	login check;
	FILE *ptr=fopen("login.txt","a+");
	
	if (ptr == NULL) {
        printf("Error\n");
        return 0;
    }
    
	while(fscanf(ptr,"%s %s",check.name,check.password) != EOF){
    	if (strcmp(check.name, str) == 0 || strcmp(check.password,password) == 0) {
    		printf("Change The Username\n");
        	return 1;
		}		
	}
	
	fclose(ptr);
	return 0;
	
	
}

// ------------------->Printing Add User<----------------------
void adduser(){
	system("cls");
	login str;
	int c=0;
	
	do{
	printf("Enter username\n");
	scanf("%49s", str.name);
	getchar();
	printf("Enter password\n");
	scanf("%49s", str.password);
	c = checkuser(str.name,str.password);//Checking User Is USed or not
	}while(c == 1);
	
	FILE *ptr=fopen("login.txt","a");
	
	if (ptr == NULL) {
        printf("Error\n");
        return;
    }
	
	fprintf(ptr,"\n%s  %s",str.name,str.password);
	fclose(ptr);
	
	return ;
	
}

// ------------------->Printing Change Password<----------------------
void changepassword(){
	system("cls");
	
	login str,str2;
	int found=0;
	char change[50];
	
	printf("Enter username\n");
	scanf("%49s", str.name);
	
	printf("Enter your current password\n");
	scanf("%49s", str.password);
	
	FILE *ptr=fopen("login.txt","r");
	 if (ptr == NULL) {
        printf("Error\n");
        return;
    }
    
	FILE *ptr2=fopen("copy.txt","w");
    
	while(fscanf(ptr,"%s %s",str2.name,str2.password) != EOF){
    	if (strcmp(str2.name, str.name) == 0 && strcmp(str2.password, str.password) == 0) {
    		found =1;
        	printf("Enter new password");
        	scanf("%s", change);
        	strcpy(str2.password,change);
		}
			fprintf(ptr2,"\n%s   %s",str2.name,str2.password);	
	}
	
	if (found == 0){
		printf("Record Not Found");
		Sleep(1000);
	}
	
	fclose(ptr);
	fclose(ptr2);
	remove("login.txt");
    rename("copy.txt", "login.txt");
    printf("Password changed successfully\n");
	return ;
	
}

// ------------------->Printing Find User<----------------------
void finduser(){
	system("cls");
	login str,str2;
	int found=0;
	printf("Enter username\n");
	scanf("%49s", str.name);
	
	printf("Enter password\n");
	scanf("%49s", str.password);
	
	
	FILE *ptr=fopen("login.txt","a+");
	 if (ptr == NULL) {
        printf("Error\n");
        return;
    }
    int num;
	
	while(fscanf(ptr,"%s  %s",str2.name,str2.password) != EOF){
		if (strcmp(str2.name, str.name) == 0 && strcmp(str2.password, str.password) == 0) {
            found = 1;
            system("cls");
			printf("User is available.\n");
            printf("Enter\n 1.Change password \n 2.continue\n");
            scanf("%d", &num);
            if(num==1){
            	fclose(ptr);
            	changepassword();
				return;
			}
			else if(num == 2){
				continuous(str.name,str.password);
			}
            break;
        }
	}
	
	if(found==0){
		printf("User unavailable");
		Sleep(1000);
	}
	
	fclose(ptr);
	return ;
}


// ------------------->Main Function<----------------------
int main(){
	login str;
	int num;
	// Printing the loading system at start
	int i,j;
	int a=177,b=219; 
	printf("\t\t\t\t         ");
	
	for(j=0;j<20;j++)
		printf("%c",a);
	printf("]\r");
	printf("\t\t\t\tLoading [");
	
	for(i=0;i<20;i++){
		Sleep(100);
		printf("%c", b);
	}
	
	printf("]\n\n");
	// BackGround Color
	system("COLOR f8");
	
	do{
		system("cls");
		printf("     *************\n");
		printf("     *    ----------------------------           *\n");
		printf("     *    WELCOME TO THE FAST FOOD E-Commerce    *\n");
		printf("     *    ----------------------------           *\n");
		printf("     *************\n\n\n");
	
		printf("Enter Number \n 1. Admin Login \n 2. Registration \n 3. Login \n 4. Exit\n");
		scanf("%d", &num);
		if(num==1){
			adminlogin();
			return 0;
		}
		else if(num==2){
			adduser();
			printf("Added Succesfully\n");
			Sleep(1000);
		}
		else if(num==3){
			finduser();
		}
		else if(num==4){
			printf("Exiting please wait!\n");
			return 0;
		}
		else {
			printf("Invalid choice");
			return 0;
		}
	}while(1);
	
	return 0;
}
