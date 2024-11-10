#include<stdio.h>
int prime(int num){
int i;
int found=0;
for(i=2;i<num;i++){
if(num%i==0){
found=1;
}
}
return found;
}
int main(){
int num;
printf("Enter the number");
scanf("%d", &num);
int c=prime(num);
if(c==0)printf("Prime");
else printf("Not Prime");
}
