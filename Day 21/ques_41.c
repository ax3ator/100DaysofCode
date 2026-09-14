/*
Q41: Write a program to swap the first and last digit of a number.

Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>
#include <math.h>

int main()
{
    int num = 78256;
    int first, last, digits, power, result;

    last = num % 10;

    digits = (int)log10(num);
    power = (int)pow(10, digits);

    first = num / power;

    result = num - (first * power) - last;
    result = result + (last * power) + first;

    printf("%d\n", result);

    return 0;
}