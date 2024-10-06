#include <stdio.h>

int main() {
    int a,i=2;
   do{
      printf("Enter the number");
      scanf("%d", &a); 
       
   }while(a<2);
      
    while (i<a){
        if(a%i==0){
        printf("Not prime");
        return 0;}
        else
        i=i+1;
    }
    printf("Prime Number");
    return 0;
}
