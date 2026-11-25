/*
Q136: Use enum to represent menu choices
(ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30
*/

#include <stdio.h>

enum Operation {
    ADD, SUBTRACT, MULTIPLY
};

int main() {
    int a = 24, b = 8;
    enum Operation choice = MULTIPLY;

    switch (choice) {
        case ADD:
            printf("%d", a + b);
            break;

        case SUBTRACT:
            printf("%d", a - b);
            break;

        case MULTIPLY:
            printf("%d", a * b);
            break;
    }

    return 0;
}
