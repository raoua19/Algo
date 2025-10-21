#include <stdio.h>

int main() {
    int n = 4;
    int A[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int i, j, temp;

   
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            temp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = temp;
        }
    }

   
    printf("Resulting Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%3d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;  }
