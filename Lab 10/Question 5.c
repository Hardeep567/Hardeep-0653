#include <stdio.h>
#include <string.h>

void write(int n, char s[], int i) {
    if (i == strlen(s) - 1) {
        printf("%c", s[i]);
        return;
    }
    printf("%c", s[i]);
    write(n, s, i + 1); 
    return;
}

int main() {
    char str[100]; 
    printf("Enter the Word");
    fgets(str, 100, stdin);
    write(100, str, 0);
    return 0;
}
