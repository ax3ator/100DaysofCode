/*
Q139: Show that enums store integers by printing assigned values.

Sample Test Cases:
Input 1:
No input
Output 1:
SUCCESS=0, FAILURE=1, TIMEOUT=2
*/

#include <stdio.h>

enum Status {
    SUCCESS = 0,
    FAILURE = 1,
    TIMEOUT = 2
};

int main() {
    enum Status a = SUCCESS;
    enum Status b = FAILURE;
    enum Status c = TIMEOUT;

    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d", a, b, c);

    return 0;
}