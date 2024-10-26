#include <stdio.h>

int main() {
    int arr3d[2][3][3];
    printf("Enter the Number");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {      
            for (int k = 0; k < 3; k++) {  
               scanf("%d", &arr3d[i][j][k]);
            }
        }
    }
    int sums[2] = {0};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {      
            for (int k = 0; k < 3; k++) {  
                sums[i] += arr3d[i][j][k];
            }
        }
    }
    for (int i = 0; i < 2; i++) {
        printf("Sum of elements on page %d: %d\n", i, sums[i]);
    }

    return 0;
}
