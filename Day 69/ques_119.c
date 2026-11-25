/*
Q119: Write a program to take an integer array as input.
Only one element will be repeated.
Print the repeated element.
Try to find the result in one single iteration.

Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1
*/

#include <stdio.h>

int main() {
    int nums[] = {2, 5, 7, 9, 5, 12};
    int n = 6;
    int seen[13] = {0};

    for (int i = 0; i < n; i++) {
        if (seen[nums[i]]) {
            printf("%d", nums[i]);
            return 0;
        }

        seen[nums[i]] = 1;
    }

    return 0;
}