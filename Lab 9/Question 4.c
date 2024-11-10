// Online C compiler to run C program online
#include<stdio.h>
#include<string.h>
int main(){
int i,n;
char str[5][]={"Hardeep","Naresh","Jeevan","Huzaif","Ansh"};
char user[10];
printf("Enterthe the string");
scanf(" %s", user);
for(i=0;i<5;i++){
if(strcmp(user,str)==0){
printf("Found");
return 0;
}
}
printf("Not found");
}
