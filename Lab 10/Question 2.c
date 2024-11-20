#include <stdio.h>
#include<string.h>
void res(int n,char c[]){
    if(n>(strlen(c)-1)/2){
    printf("  %s", c );
    return;
}
char temp=c[n];
c[n]=c[strlen(c)-1-n];
c[strlen(c)-1-n]=temp;
res(n+1,c);

}
int main() {
    char c[100];
    printf("Enter the string");
    fgets(c,100,stdin);
    res(0,c);
 
}
