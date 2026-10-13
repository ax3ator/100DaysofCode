/*
Q85: Reverse a string.

Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "elephant";
    int length = strlen(str);

    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}