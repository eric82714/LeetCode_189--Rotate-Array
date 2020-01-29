class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        if k > len(nums): k %= len(nums)
        
        tmp = [0] * len(nums)
        
        for i in range(k, 0 ,-1):
            tmp[k-i] = nums[len(nums)-i]
        
        for i in range(len(nums)-k):
            tmp[k+i] = nums[i]
            
        nums[:] = tmp
        
        del tmp
