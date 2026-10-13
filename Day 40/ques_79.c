/*
Q79: Write a C program to perform diagonal traversal of a matrix.

Sample Test Case:

Input:
3 3
2 4 6
8 10 12
14 16 18

Output:
2 4 8 14 10 6 12 16 18
*/

#include <stdio.h>

int main() {
    int rows = 3, cols = 3;

    int matrix[3][3] = {
        {2, 4, 6},
        {8, 10, 12},
        {14, 16, 18}
    };

    // Diagonal traversal
    for (int sum = 0; sum < rows + cols - 1; sum++) {
        if (sum % 2 == 0) {
            for (int i = rows - 1; i >= 0; i--) {
                int j = sum - i;
                if (j >= 0 && j < cols) {
                    printf("%d ", matrix[i][j]);
                }
            }
        } else {
            for (int i = 0; i < rows; i++) {
                int j = sum - i;
                if (j >= 0 && j < cols) {
                    printf("%d ", matrix[i][j]);
                }
            }
        }
    }

    return 0;
}