#include <stdio.h>

int main() {
   int i,j,num,str=1;
   printf("Enter the number");
   scanf("%d", &num);
   int sp=num;
   for(i=1;i<=num;i++){
   for(j=0;j<sp;j++){
       printf(" ");
   }
   for(j=0;j<i;j++){
       printf("* ");
   }
   for(j=0;j<sp;j++){
       printf(" ");
   }
   sp-=1;
   str++;
   printf("\n");
   }
   sp=1;
   for(i=num-1;i>0;i--){
   for(j=0;j<sp;j++){
       printf(" ");
   }
   for(j=0;j<i;j++){
       printf(" *");
   }
   for(j=0;j<sp;j++){
       printf(" ");
   }
   sp+=1;
   printf("\n");
   }
    return 0;
}
