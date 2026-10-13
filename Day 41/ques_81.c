/*
Q81: Write a C program to count characters in a string without using built-in length functions.

Sample Test Case:

Input:
Engineering

Output:
11
*/

#include <stdio.h>

int main() {
    char str[] = "Engineering";
    int count = 0;

    // Count characters
    while (str[count] != '\0') {
        count++;
    }

    printf("%d\n", count);

    return 0;
}