class Solution(object):
    def distinctAverages(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        nums.sort()
        empty = set()
        for i in range(len(nums)):
            if i != (len(nums) - 1 - i) or i<(len(nums) - 1 - i):
                avg1 = (nums[i] + nums[len(nums) - 1 - i]) / 2.00
                empty.add(avg1)
            else:
                break
        return(len(empty))
        distinctAverages(self, nums)