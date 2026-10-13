/*
Q92: Find the first repeating lowercase alphabet in a string.

Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

#include <stdio.h>

int main() {
    char str[] = "address";
    int found = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 'a' || str[i] > 'z') {
            continue;
        }

        for (int j = i + 1; str[j] != '\0'; j++) {
            if (str[i] == str[j]) {
                printf("%c\n", str[i]);
                found = 1;
                break;
            }
        }

        if (found == 1) {
            break;
        }
    }

    if (found == 0) {
        printf("No repeating character\n");
    }

    return 0;
}