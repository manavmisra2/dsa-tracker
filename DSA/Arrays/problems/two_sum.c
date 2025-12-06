/*
 * Arrays - Two Sum
 * Created: 2025-12-06
 *
 * Problem Description:
 * Given an array of integers nums and an integer target,
 * return indices of the two numbers such that they add up to target.
 *
 * Example:
 *     Input: nums = [2,7,11,15], target = 9
 *     Output: [0,1] (because nums[0] + nums[1] == 9)
 *
 * Time Complexity: O(n^2) for brute force, O(n) with hash map
 * Space Complexity: O(1) for brute force, O(n) with hash map
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Brute Force Solution
 * Returns a dynamically allocated array with two indices
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;

    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }

    *returnSize = 0;
    free(result);
    return NULL;
}

/* Test the solution */
int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int returnSize;

    int* result = twoSum(nums, 4, target, &returnSize);

    if (result != NULL) {
        printf("Indices: [%d, %d]\n", result[0], result[1]);
        printf("Values: %d + %d = %d\n", nums[result[0]], nums[result[1]], target);
        free(result);
    } else {
        printf("No solution found\n");
    }

    return 0;
}
