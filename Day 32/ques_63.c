/*
Q63: Merge two arrays.

Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include <stdio.h>

int main()
{
    int arr1[4] = {10, 20, 30, 40};
    int arr2[3] = {50, 60, 70};
    int merged[7];
    int i, j;

    for (i = 0; i < 4; i++)
    {
        merged[i] = arr1[i];
    }

    for (j = 0; j < 3; j++)
    {
        merged[i + j] = arr2[j];
    }

    for (i = 0; i < 7; i++)
    {
        printf("%d ", merged[i]);
    }

    return 0;
}