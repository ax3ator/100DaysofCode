/*
Q65: Search in a sorted array using binary search.

Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include <stdio.h>

int main()
{
    int arr[7] = {4, 8, 12, 16, 20, 24, 28};
    int search = 20;
    int low = 0, high = 6;
    int mid, index = -1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == search)
        {
            index = mid;
            break;
        }
        else if (arr[mid] < search)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (index != -1)
    {
        printf("Found at index %d\n", index);
    }
    else
    {
        printf("-1\n");
    }

    return 0;
}