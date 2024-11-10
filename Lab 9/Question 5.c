#include <stdio.h>
#include <string.h>

int main() {
    int i,j,len,found = 0;
    char arr[5][20];

    for (i = 0; i < 5; i++){
        printf("Enter word %d: ",i+1);
        scanf("%s",arr[i]);
    }

    for(i = 0 ; i < 5; i++){
        len = strlen(arr[i]);
        for(j = 0 ; j < len/2; j++){
            if(arr[i][j] == arr[i][len-j-1]){
                found = 1;
            }
            else{
                found = 0;
            }
        }
        if(found == 1){
            printf("%s is palindrome..\n",arr[i]);
        }
        else{
            printf("%s  is not a palindrome..\n",arr[i]);   
        }
    }
    
    
    return 0;
}
