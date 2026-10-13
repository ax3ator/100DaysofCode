/*
Q95: Check if one string is a rotation of another.

Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "planet";
    char str2[] = "netpla";
    char temp[100];

    if (strlen(str1) != strlen(str2)) {
        printf("Not rotation\n");
    } else {
        strcpy(temp, str1);
        strcat(temp, str1);

        if (strstr(temp, str2) != NULL) {
            printf("Rotation\n");
        } else {
            printf("Not rotation\n");
        }
    }

    return 0;
}