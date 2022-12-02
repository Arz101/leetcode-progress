class Solution:
    def search(self, nums: List[int], target: int) -> int:

      minx = 0
      maxy = len(nums) - 1
      
      
      while minx <= maxy:
        var = int((minx+maxy)/2)
        
        if nums[var] == target:
          return var
        
        if nums[var] > target:
          maxy = var - 1
        
        if nums[var] < target:
          minx = var + 1
      
      return -1
