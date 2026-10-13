/*
Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/

#include <stdio.h>

int main() {
    char date[] = "23/04/2026";
    int day, month, year;

    sscanf(date, "%d/%d/%d", &day, &month, &year);

    if (month == 4) {
        printf("%02d-Apr-%04d\n", day, year);
    }

    return 0;
}