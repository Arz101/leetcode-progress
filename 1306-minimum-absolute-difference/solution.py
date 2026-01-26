class Solution:
    def minimumAbsDifference(self, arr: List[int]) -> List[List[int]]:
        arr.sort()

        min = 99999999
        ans = []
        for i in range(1, len(arr)):
            diff = arr[i] - arr[i - 1]
            if diff < min:
                min = diff
                ans = [[arr[i - 1], arr[i]]]
            elif diff == min:
                ans.append([arr[i - 1], arr[i]])
        return ans
