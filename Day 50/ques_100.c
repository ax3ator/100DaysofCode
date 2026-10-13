/*
Q100: Print all sub-strings of a string.

Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "DOG";
    int length = strlen(str);
    int first = 1;

    for (int i = 0; i < length; i++) {
        for (int j = i; j < length; j++) {
            if (!first) {
                printf(",");
            }

            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }

            first = 0;
        }
    }

    printf("\n");

    return 0;
}