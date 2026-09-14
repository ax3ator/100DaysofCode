/*
Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*



Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include <stdio.h>

int main()
{
    int i;

    int stars[] = {2, 4, 6, 4, 2};
    int groups = 5;

    for (i = 0; i < groups; i++)
    {
        int j;

        for (j = 0; j < stars[i]; j++)
        {
            printf("*\n");
        }

        printf("\n");
    }

    return 0;
}