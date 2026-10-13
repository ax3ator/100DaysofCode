/*
Q76: Write a C program to check if a matrix is symmetric.

Sample Test Case:

Input:
3 3
4 7 2
7 5 9
2 9 6

Output:
True
*/

#include <stdio.h>

int main() {
    int rows = 3, cols = 3;

    int matrix[3][3] = {
        {4, 7, 2},
        {7, 5, 9},
        {2, 9, 6}
    };

    int symmetric = 1;

    // Check if the matrix is symmetric
    if (rows != cols) {
        symmetric = 0;
    } else {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] != matrix[j][i]) {
                    symmetric = 0;
                    break;
                }
            }
            if (symmetric == 0) {
                break;
            }
        }
    }

    // Print the result
    if (symmetric == 1) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}