/*
Q82: Write a C program to print each character of a string on a new line.

Sample Test Case:

Input:
CODE

Output:
C
O
D
E
*/

#include <stdio.h>

int main() {
    char str[] = "CODE";

    // Print each character
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }

    return 0;
}