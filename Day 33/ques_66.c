/*
Q66: Insert an element in a sorted array at the appropriate position.

Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>

int main()
{
    int arr[10] = {5, 10, 15, 25, 30, 35};
    int n = 6;
    int element = 20;
    int i;

    for (i = n - 1; i >= 0 && arr[i] > element; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[i + 1] = element;
    n++;

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}