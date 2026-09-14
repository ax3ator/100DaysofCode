/*
Q72: Find the sum of all elements in a matrix.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
#include <stdio.h>

int main()
{
    int matrix[3][2] = {
        {5, 10},
        {15, 20},
        {25, 30}
    };

    int i, j;
    int sum = 0;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            sum = sum + matrix[i][j];
        }
    }

    printf("%d\n", sum);

    return 0;
}