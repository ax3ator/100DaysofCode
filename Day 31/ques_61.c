/*
Q61: Search for an element in an array using linear search.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include <stdio.h>

int main()
{
    int arr[6] = {14, 27, 35, 48, 52, 63};
    int search = 48;
    int i, index = -1;

    for (i = 0; i < 6; i++)
    {
        if (arr[i] == search)
        {
            index = i;
            break;
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