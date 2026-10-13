/*
Q83: Write a C program to count vowels and consonants in a string.

Sample Test Case:

Input:
computer

Output:
Vowels=3, Consonants=5
*/

#include <stdio.h>

int main() {
    char str[] = "computer";
    int vowels = 0, consonants = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' ||
            ch == 'O' || ch == 'U') {
            vowels++;
        }
        else if ((ch >= 'a' && ch <= 'z') ||
                 (ch >= 'A' && ch <= 'Z')) {
            consonants++;
        }
    }

    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);

    return 0;
}