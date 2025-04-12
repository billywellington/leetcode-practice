#include <stdio.h>

/*
--------------------------------------------------------------------------------
📝 Problem: Two Sum
🔗 Source: LeetCode (https://leetcode.com/problems/two-sum/description/
📄 Description:
    Given an array of integers nums and an integer target, return the indices 
    of the two numbers such that they add up to target.

    You may assume that each input would have exactly one solution, and you may 
    not use the same element twice.

    You can return the answer in any order.

📥 Example 1:
    Input: nums = [2, 7, 11, 15], target = 9
    Output: [0, 1]
    Explanation: nums[0] + nums[1] == 9

📥 Example 2:
    Input: nums = [3, 2, 4], target = 6
    Output: [1, 2]

📥 Example 3:
    Input: nums = [3, 3], target = 6
    Output: [0, 1]

✅ Constraints:
    - 2 <= nums.length <= 10^4
    - -10^9 <= nums[i] <= 10^9
    - -10^9 <= target <= 10^9
    - Only one valid answer exists.

⚠️ Note:
    This solution is written independently and may not follow the exact function
    format required by LeetCode. The goal was to focus on solving the problem 
    using my own logic and approach, rather than strictly matching the platform's
    function signature requirements.
--------------------------------------------------------------------------------
*/

void main()
{
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int size = sizeof(nums) / sizeof(nums[0]);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == j)
                continue;

            if (nums[i] + nums[j] == target)
                printf("[%d, %d]\n", nums[i], nums[j]);
        }
        break;
    }
}
