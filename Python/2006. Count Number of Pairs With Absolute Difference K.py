class Solution(object):
    def countKDifference(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        count=0
        for i in range(len(nums)):
            for j in range(len(nums)):
                if  nums[j]-nums[i]==k:
                    count+=1    
        return count
        countKDifference(nums, k)