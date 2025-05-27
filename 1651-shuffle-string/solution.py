class Solution:
    def restoreString(self, s: str, indices: List[int]) -> str:
        map = {}

        for i in range(0, len(indices)):
            map[indices[i]] = s[i]
    
        ls = sorted(map)
    
        ans = ""
        for i in ls:
            ans += map[i]

        return ans
