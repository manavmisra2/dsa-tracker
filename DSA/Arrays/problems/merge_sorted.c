/*
 * Arrays - Merge Sorted Arrays
 *
 * Problem: Merge two sorted arrays into one sorted array.
 *
 * Example:
 *     Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
 *     Output: [1,2,2,3,5,6]
 *
 * Time Complexity: O(m + n)
 * Space Complexity: O(1)
 */

#include <stdio.h>

void merge(int* nums1, int m, int* nums2, int n) {
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k] = nums1[i];
            i--;
        } else {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }

    while (j >= 0) {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
}

void printArray(int* nums, int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", nums[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]\n");
}

int main() {
    int nums1[] = {1, 2, 3, 0, 0, 0};
    int nums2[] = {2, 5, 6};
    int m = 3, n = 3;

    printf("Before merge:\n");
    printf("nums1: ");
    printArray(nums1, m + n);
    printf("nums2: ");
    printArray(nums2, n);

    merge(nums1, m, nums2, n);

    printf("\nAfter merge:\n");
    printf("nums1: ");
    printArray(nums1, m + n);

    return 0;
}
