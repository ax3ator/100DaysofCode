/*
Q98: Print initials of a name with the surname displayed in full.

Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include <stdio.h>
#include <string.h>

int main() {
    char name[] = "Arjun Kumar Mehta";
    int length = strlen(name);
    int lastSpace = -1;

    for (int i = 0; i < length; i++) {
        if (name[i] == ' ') {
            lastSpace = i;
        }
    }

    printf("%c.", name[0]);

    for (int i = 0; i < lastSpace; i++) {
        if (name[i] == ' ' && name[i + 1] != '\0') {
            printf("%c.", name[i + 1]);
        }
    }

    printf(" %s\n", name + lastSpace + 1);

    return 0;
}