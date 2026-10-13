/*
Q74: Write a C program to find the transpose of a matrix.

Sample Test Case:

Input:
3 2
7 9
4 6
2 8

Output:
7 4 2
9 6 8
*/

#include <stdio.h>

int main() {
    int rows = 3, cols = 2;

    int matrix[3][2] = {
        {7, 9},
        {4, 6},
        {2, 8}
    };

    int transpose[2][3];

    // Find transpose of the matrix
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Print transpose of the matrix
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}