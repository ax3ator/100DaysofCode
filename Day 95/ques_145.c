/*
Q145: Return a structure containing top student's
details from a function.

Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

struct Student findTopper(struct Student s[], int n) {
    struct Student topper = s[0];

    for (int i = 1; i < n; i++) {
        if (s[i].marks > topper.marks)
            topper = s[i];
    }

    return topper;
}

int main() {
    struct Student students[3] = {
        {"Aryan", 211, 84},
        {"Adil", 212, 97},
        {"Dev", 213, 91}
    };

    struct Student top = findTopper(students, 3);

    printf("Top Student: %s | Roll: %d | Marks: %d",
           top.name, top.roll, top.marks);

    return 0;
}