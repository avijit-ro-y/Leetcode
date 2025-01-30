class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        for i in range(0,len(nums)):
            for j in range(i+1,len(nums)):
                if int(nums[i])+int(nums[j])==target:
                    return [i,j]
        twoSum(self, nums, target)