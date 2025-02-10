class Solution(object):
    def maxSubarraySumCircular(self, nums):
        n = len(nums)
        maxEndingHere = nums[0]
        minEndingHere = nums[0]
        maxSoFar = nums[0]
        minSoFar = nums[0]
        totalSum = nums[0]
    
        for i in range(1, n):
            maxEndingHere = max(nums[i], maxEndingHere + nums[i])
            maxSoFar = max(maxSoFar, maxEndingHere)
        
            minEndingHere = min(nums[i], minEndingHere +nums[i])
            minSoFar = min(minSoFar, minEndingHere)
        
            totalSum += nums[i]
        if minSoFar == totalSum:
            return maxSoFar
        return max(maxSoFar, totalSum - minSoFar)

    