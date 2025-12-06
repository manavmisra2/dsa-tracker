/*
 * Arrays - Rotate Array
 *
 * Problem: Rotate an array to the right by k steps.
 *
 * Example:
 *     Input: nums = [1,2,3,4,5,6,7], k = 3
 *     Output: [5,6,7,1,2,3,4]
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

#include <stdio.h>

void reverse(int* nums, int start, int end) {
    while (start < end) {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
}

void rotate(int* nums, int numsSize, int k) {
    k = k % numsSize;
    if (k == 0) return;

    reverse(nums, 0, numsSize - 1);
    reverse(nums, 0, k - 1);
    reverse(nums, k, numsSize - 1);
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
    int nums[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(nums) / sizeof(nums[0]);
    int k = 3;

    printf("Original: ");
    printArray(nums, size);

    rotate(nums, size, k);

    printf("Rotated by %d: ", k);
    printArray(nums, size);

    return 0;
}
