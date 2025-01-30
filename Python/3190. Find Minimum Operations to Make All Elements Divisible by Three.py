class Solution(object):
    def minimumOperations(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        count = 0
        for i in range(len(nums)):
            if (((1 + nums[i])%3)==0 or ((nums[i]-1)%3)==0):
                count += 1
        return count
        minimumOperations(self, nums)