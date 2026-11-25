/*
Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT,
and print messages accordingly.

Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed
*/

#include <stdio.h>

enum Status {
    SUCCESS, FAILURE, TIMEOUT
};

int main() {
    enum Status result = TIMEOUT;

    switch (result) {
        case SUCCESS:
            printf("Operation successful");
            break;

        case FAILURE:
            printf("Operation failed");
            break;

        case TIMEOUT:
            printf("Operation timed out");
            break;
    }

    return 0;
}