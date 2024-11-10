#include <stdio.h>

void swapValue(int, int );
int main() 

    int num1, num2;
    printf("Enter num1: ");
    scanf("%d",&num1);
    printf("Enter num2: ");
    scanf("%d",&num2);

    swapValue(num1,num2);

    return 0;
}

void swapValue(int num1 , int num2){
    int temp; 

    printf("Numbers before swaping : %d , %d\n",num1,num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("Numbers after swaping : %d , %d",num1,num2);

}
