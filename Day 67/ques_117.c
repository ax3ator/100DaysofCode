/*
Q117: Write a program to take two sorted arrays of size m and n
as input. Merge both the arrays such that the merged array
is also sorted. Print the merged array.

Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3,-1,7]
Output 3:
-10 -3 -2 -1 7 7
*/

#include <stdio.h>

int main() {
    int a[] = {3, 9, 16, 22};
    int b[] = {5, 11, 18};
    int merged[7];

    int i = 0, j = 0, k = 0;

    while (i < 4 && j < 3) {
        if (a[i] <= b[j])
            merged[k++] = a[i++];
        else
            merged[k++] = b[j++];
    }

    while (i < 4)
        merged[k++] = a[i++];

    while (j < 3)
        merged[k++] = b[j++];

    for (i = 0; i < 7; i++)
        printf("%d ", merged[i]);

    return 0;
}