/*
Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/

#include <stdio.h>

int main() {
    int arr[] = {8, 12, 5, 20, 15, 7};
    int k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxSum = 0;

    for (int i = 0; i < k; i++) {
        maxSum += arr[i];
    }

    int currentSum = maxSum;

    for (int i = k; i < n; i++) {
        currentSum = currentSum + arr[i] - arr[i - k];

        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    printf("%d\n", maxSum);

    return 0;
}