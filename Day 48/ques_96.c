/*
Q96: Reverse each word in a sentence without changing the word order.

Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "We study physics";
    int start = 0;
    int length = strlen(str);

    for (int i = 0; i <= length; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            for (int j = i - 1; j >= start; j--) {
                printf("%c", str[j]);
            }

            if (str[i] == ' ') {
                printf(" ");
            }

            start = i + 1;
        }
    }

    printf("\n");

    return 0;
}