/*
 *NAME : HARDEEP NARESH
 *Date : 9 Sept 2024
 *Desc : upper case or lower case 
 */
#include<stdio.h>
int main(){
	char a;
	printf("Enter the charater");
	scanf(" %c", &a);
	if( a>= 97 && a<= 122 ){
		printf("This character is lowercase");
	}
	else if( a>= 65 && a<= 90 ){
		printf("This character is upper case");
	}
	else if( a>= 48 && a<= 57 ){
		printf("This character is Digit");
	
	}
	else if( a>= 128 && a<= 255 ){
		printf("This character is Special Case");
	}
	else {
		printf("the character is Not Found");
	}
}
