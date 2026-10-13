/*
Q73: Write a C program to find the sum of each row of a matrix and store it in an array.

Sample Test Case:

Input:
3 3
2 4 6
3 5 7
8 1 9

Output:
12 15 18
*/

#include <stdio.h>

int main() {
    int rows = 3, cols = 3;
    int matrix[3][3] = {
        {2, 4, 6},
        {3, 5, 7},
        {8, 1, 9}
    };
    int sum[3];

    for (int i = 0; i < rows; i++) {
        sum[i] = 0;

        for (int j = 0; j < cols; j++) {
            sum[i] += matrix[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        printf("%d ", sum[i]);
    }

    return 0;
}