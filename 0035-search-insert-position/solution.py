class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        
        MIN = 0
        MAX = len(nums)
        
        if nums[-1] < target:
          return len(nums)
        
        while MIN <= MAX:
          i = int((MIN+MAX)/2)
        
          if nums[i] == target:
            return i  
          
          if nums[i] > target:
            MAX = i - 1

          if nums[i] < target:
            MIN = i + 1
          
        return MIN
