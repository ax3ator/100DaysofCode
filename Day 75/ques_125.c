/*
Q125: Open an existing file in append mode and allow
the user to enter a new line of text.
Append the text at the end without overwriting existing content.

Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.
*/

#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char text[200];

    fp = fopen("data.txt", "a");

    if (fp == NULL) {
        printf("Unable to open file");
        return 1;
    }

    fgets(text, sizeof(text), stdin);

    fputc('\n', fp);
    fputs(text, fp);

    if (strlen(text) > 0 && text[strlen(text) - 1] != '\n')
        fputc('\n', fp);

    fclose(fp);

    printf("File updated successfully with appended text.");

    return 0;
}