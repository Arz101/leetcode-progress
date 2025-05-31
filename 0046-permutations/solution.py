class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        lists = []
        def dfs(voidList, nums):
            if len(voidList) <= len(nums):
                for num in nums:
                    if num not in voidList:
                        voidList.append(num)
                        dfs(voidList, nums) 

            if len(voidList) == len(nums):
                lists.append(voidList[:])

            if len(voidList) > 0: 
                voidList.pop(-1)
            return

        dfs([], nums)

        return lists
            
            
            

