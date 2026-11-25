/*
Q143: Find and print the student with the highest marks.

Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student s[4] = {
        {"Aryan", 201, 82},
        {"Priya", 202, 96},
        {"Kabir", 203, 89},
        {"Neel", 204, 91}
    };

    int topper = 0;

    for (int i = 1; i < 4; i++) {
        if (s[i].marks > s[topper].marks)
            topper = i;
    }

    printf("Topper: %s (Marks: %d)",
           s[topper].name, s[topper].marks);

    return 0;
}