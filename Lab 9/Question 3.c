#include<stdio.h>
#include<string.h>
int main(){
int a,b,num,i;
printf("Enter the size of destination\n");
scanf("%d", &a);
printf("Enter the sie of source\n");
scanf("%d", &b);
char sou[b];
char dest[a+b];
printf("Enter the source string");
scanf(" %s", sou);
printf("Enter the destination string");
scanf(" %s", dest);
printf("Enter the number upon which it append");
scanf("%d", &num);
char temp[b];
if(num>b){
printf("Number is bigger than the string");
}
else{
for(i=0;i<num;i++){
temp[i]=sou[i];
}
strcat(dest,temp);
puts(dest);
}


}
