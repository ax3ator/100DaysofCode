/*
Q140: Define a struct with enum Gender
and print person's gender.

Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male
*/

#include <stdio.h>

enum Gender {
    MALE, FEMALE, OTHER
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p = {"Adil", MALE};

    printf("Name: %s\n", p.name);

    switch (p.gender) {
        case MALE:
            printf("Male");
            break;

        case FEMALE:
            printf("Female");
            break;

        case OTHER:
            printf("Other");
            break;
    }

    return 0;
}