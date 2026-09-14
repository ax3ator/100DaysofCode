/*
Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include <stdio.h>
#include <math.h>

int main()
{
    float principal = 2000;
    float rate = 10;
    float time = 2;
    float simpleInterest, compoundInterest, amount;

    simpleInterest = (principal * rate * time) / 100;

    amount = principal * pow((1 + rate / 100), time);
    compoundInterest = amount - principal;

    printf("Simple Interest=%.2f, Compound Interest=%.2f\n",
           simpleInterest, compoundInterest);

    return 0;
}