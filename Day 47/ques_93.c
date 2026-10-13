/*
Q93: Check if two strings are anagrams of each other.

Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "dusty";
    char str2[] = "study";

    int count[256] = {0};
    int anagram = 1;

    if (strlen(str1) != strlen(str2)) {
        anagram = 0;
    } else {
        for (int i = 0; str1[i] != '\0'; i++) {
            count[(unsigned char)str1[i]]++;
            count[(unsigned char)str2[i]]--;
        }

        for (int i = 0; i < 256; i++) {
            if (count[i] != 0) {
                anagram = 0;
                break;
            }
        }
    }

    if (anagram == 1) {
        printf("Anagrams\n");
    } else {
        printf("Not anagrams\n");
    }

    return 0;
}