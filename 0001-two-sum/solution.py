class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        data = {}

        for i in range(0,len(nums)):
            comp = target - nums[i]
            if comp in data:
                return [data[comp], i]
            else: data[nums[i]] = i
        return []
