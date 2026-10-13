/*
Q84: Write a C program to convert a lowercase string to uppercase without using built-in functions.

Sample Test Case:

Input:
technology

Output:
TECHNOLOGY
*/

#include <stdio.h>

int main() {
    char str[] = "technology";

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    printf("%s\n", str);

    return 0;
}