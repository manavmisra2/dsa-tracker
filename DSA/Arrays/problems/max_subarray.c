/*
 * Arrays - Maximum Subarray (Kadane's Algorithm)
 *
 * Problem: Find the contiguous subarray with the largest sum.
 *
 * Example:
 *     Input: [-2,1,-3,4,-1,2,1,-5,4]
 *     Output: 6 (subarray [4,-1,2,1])
 *
 * Time Complexity: O(n)
 * Space Complexity: O(1)
 */

#include <stdio.h>
#include <limits.h>

int maxSubArray(int* nums, int numsSize) {
    int maxSum = INT_MIN;
    int currentSum = 0;

    for (int i = 0; i < numsSize; i++) {
        currentSum += nums[i];

        if (currentSum > maxSum) {
            maxSum = currentSum;
        }

        if (currentSum < 0) {
            currentSum = 0;
        }
    }

    return maxSum;
}

int main() {
    int nums[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size = sizeof(nums) / sizeof(nums[0]);

    int result = maxSubArray(nums, size);
    printf("Maximum subarray sum: %d\n", result);

    return 0;
}
