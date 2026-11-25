/*
Q130: Store multiple student records (name, roll number, marks)
into a file using fprintf(). Then read them using fscanf()
and display each record.

Sample Test Cases:
Input 1:
Student 1 -> Name: Asha, Roll: 101, Marks: 85
Student 2 -> Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92
*/

#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    int roll, marks;

    fp = fopen("students.txt", "w");

    if (fp == NULL)
        return 1;

    fprintf(fp, "Arjun 201 88\n");
    fprintf(fp, "Priya 202 94\n");
    fprintf(fp, "Kabir 203 79\n");

    fclose(fp);

    fp = fopen("students.txt", "r");

    if (fp == NULL)
        return 1;

    while (fscanf(fp, "%49s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n",
               name, roll, marks);
    }

    fclose(fp);

    return 0;
}