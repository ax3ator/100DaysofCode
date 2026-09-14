/*
Q33: Write a program to check if a number is an Armstrong number.

Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>

int main()
{
    int num = 370;
    int original, remainder, sum = 0;

    original = num;

    while (num != 0)
    {
        remainder = num % 10;
        sum = sum + (remainder * remainder * remainder);
        num = num / 10;
    }

    if (original == sum)
    {
        printf("Armstrong\n");
    }
    else
    {
        printf("Not Armstrong\n");
    }

    return 0;
}