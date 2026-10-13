/*
Q80: Write a C program to multiply two matrices.

Sample Test Case:

Input:
2 2
2 3
4 5
2 2
6 7
8 9

Output:
36 41
64 73
*/

#include <stdio.h>

int main() {
    int matrix1[2][2] = {
        {2, 3},
        {4, 5}
    };

    int matrix2[2][2] = {
        {6, 7},
        {8, 9}
    };

    int result[2][2] = {0};

    // Multiply matrices
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // Print result
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}