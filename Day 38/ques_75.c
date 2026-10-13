/*
Q75: Write a C program to add two matrices.

Sample Test Case:

Input:
2 3
3 5 7
2 4 6
2 3
1 3 5
4 6 8

Output:
4 8 12
6 10 14
*/

#include <stdio.h>

int main() {
    int rows = 2, cols = 3;

    int matrix1[2][3] = {
        {3, 5, 7},
        {2, 4, 6}
    };

    int matrix2[2][3] = {
        {1, 3, 5},
        {4, 6, 8}
    };

    int sum[2][3];

    // Add two matrices
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Print the resulting matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}