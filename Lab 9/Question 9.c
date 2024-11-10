#include<stdio.h>
#include<string.h>
char res(char str[0],int c){
    int i,j=0;
    char new_str[100];
    for(i=c-2;i>=0;i--){
        new_str[j]= str[i];
        j++;
    }
    printf(" %s", new_str);
    return 0;
}
int main(){
    char str[100];
    printf("Enter the strings");
    fgets(str,100,stdin);
    int c=strlen(str);
    res(str,c);
}
