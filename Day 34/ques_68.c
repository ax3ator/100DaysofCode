/*
Q68: Delete an element from an array.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include <stdio.h>

int main()
{
    int arr[6] = {10, 20, 30, 40, 50, 60};
    int n = 6;
    int position = 3;
    int i;

    for (i = position; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}