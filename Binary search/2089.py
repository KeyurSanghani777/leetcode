class Solution(object):
    def targetIndices(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        nums.sort()
        left = 0
        right = len(nums) - 1
        while left < right:
            mid = (left + right) // 2
            if nums[mid] < target:
                left = mid + 1
            else:
                right = mid
        if nums[left] != target:
            return [-1, -1]
        else:
            start = left
        right = len(nums) - 1
        while left < right:
            mid = (left + right) // 2 + 1
            if nums[mid] > target:
                right = mid - 1
            else:
                left = mid
        return [start, right]
        