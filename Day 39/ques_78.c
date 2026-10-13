/*
Q78: Write a C program to find the sum of main diagonal elements of a square matrix.

Sample Test Case:

Input:
3 3
4 7 2
6 8 3
5 1 9

Output:
21
*/

#include <stdio.h>

int main() {
    int n = 3;

    int matrix[3][3] = {
        {4, 7, 2},
        {6, 8, 3},
        {5, 1, 9}
    };

    int sum = 0;

    // Calculate sum of main diagonal elements
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    // Print the sum
    printf("%d\n", sum);

    return 0;
}