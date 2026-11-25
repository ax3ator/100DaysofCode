/*
Q124: Take two filenames from the user - a source file
and a destination file. Copy all the content from the
source file to the destination file using fgetc() and fputc().

Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt
*/

#include <stdio.h>

int main() {
    FILE *source, *destination;
    char src[100], dest[100];
    int ch;

    scanf("%99s", src);
    scanf("%99s", dest);

    source = fopen(src, "rb");

    if (source == NULL) {
        printf("Source file not found");
        return 1;
    }

    destination = fopen(dest, "wb");

    if (destination == NULL) {
        printf("Cannot create destination file");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF)
        fputc(ch, destination);

    fclose(source);
    fclose(destination);

    printf("File copied successfully to %s", dest);

    return 0;
}