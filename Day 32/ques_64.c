/*
Q64: Find the digit that occurs the most times in an integer number.

Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main()
{
    int num = 4555662;
    int count[10] = {0};
    int digit, i;
    int maxDigit = 0;
    int maxCount = 0;

    while (num != 0)
    {
        digit = num % 10;
        count[digit]++;
        num = num / 10;
    }

    for (i = 0; i < 10; i++)
    {
        if (count[i] > maxCount)
        {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("%d\n", maxDigit);

    return 0;
}