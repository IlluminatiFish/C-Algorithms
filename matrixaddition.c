#include <stdio.h>

// Adds two 2x2 matrices and returns the resulting matrix

int main() {
    // Define each matrix 
    float matrixA[2][2];
    float martixB[2][2]
    float matrixR[2][2];
    
    // Take inputs for both martices 

    printf("Enter elements of 1st matrix\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("Enter value for matrix A at position (%d, %d): ", i + 1, j + 1);
            scanf("%f", &matrixA[i][j]);
        }
    }
    
    printf("Enter elements of 2nd matrix\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
          printf("Enter value for matrix B at position (%d, %d): ", i + 1, j + 1);
          scanf("%f", &martixB[i][j]);
        }
    }


    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
          matrixR[i][j] = matrixA[i][j] + martixB[i][j];
        }
    }

    // Displaying the sum of two 2x2 matrices i.e. A + B = R
    printf("\nSum Of Matrix:\n");
    
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            
          printf("%.1f\t", matrixR[i][j]);
          if (j == 1) {
            printf("\n");
          }
        }
    }
    return 0;
}
