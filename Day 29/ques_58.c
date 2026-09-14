/*
Q58: Find the maximum and minimum element in an array.

Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/
#include <stdio.h>

int main()
{
    int arr[6] = {15, 6, 23, 4, 18, 11};
    int i, max, min;

    max = arr[0];
    min = arr[0];

    for (i = 1; i < 6; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Max=%d, Min=%d\n", max, min);

    return 0;
}