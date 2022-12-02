# The isBadVersion API is already defined for you.
# def isBadVersion(version: int) -> bool:

class Solution:
    def firstBadVersion(self, n: int) -> int:
        
        min_ = 0
        max_ = n
        
        while True:
          mid = int((min_+max_)/2)
          
          if isBadVersion(mid):
            max_ = mid - 1
            
            if isBadVersion(mid-1) == False:
              return mid  
          else:
              min_ = mid + 1
          
        return n
            
          
          
