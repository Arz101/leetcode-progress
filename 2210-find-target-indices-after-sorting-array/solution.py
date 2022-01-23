class Solution:
    def targetIndices(self, nums: List[int], target: int) -> List[int]:
        num = sorted(nums)
        return [x for x in range(len(num)) if num[x] == target]
