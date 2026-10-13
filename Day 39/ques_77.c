/*
Q77: Write a C program to check if the elements on the diagonal of a matrix are distinct.

Sample Test Case:

Input:
3 3
4 2 6
7 8 3
1 5 9

Output:
True
*/

#include <stdio.h>

int main() {
    int n = 3;

    int matrix[3][3] = {
        {4, 2, 6},
        {7, 8, 3},
        {1, 5, 9}
    };

    int distinct = 1;

    // Check if diagonal elements are distinct
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                distinct = 0;
                break;
            }
        }
    }

    // Print the result
    if (distinct == 1) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}