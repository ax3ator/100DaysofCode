/*
Q38: Write a program to find the sum of digits of a number.

Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>

int main()
{
    int num = 456;
    int sum = 0;
    int remainder;

    while (num != 0)
    {
        remainder = num % 10;
        sum = sum + remainder;
        num = num / 10;
    }

    printf("%d\n", sum);

    return 0;
}