"""
Question:
Given an array of positive integers nums, return the maximum possible sum of an ascending subarray in nums.

An ascending subarray is defined as a contiguous subarray where each element is strictly greater than the previous one.

Example:
Input: nums = [10, 20, 30, 5, 10, 50]
Output: 65
Explanation: The maximum ascending subarray sum is 10 + 20 + 30 + 5 = 65.
"""
class Solution(object):
    def maxAscendingSum(self, nums):
        res=nums[0]
        curr_sum=nums[0]

        for i in range(1,len(nums)):
            if nums[i] > nums[i-1]:
                curr_sum+=nums[i]
            else:
                curr_sum=nums[i]
            res=max(res,curr_sum)
        return res

        