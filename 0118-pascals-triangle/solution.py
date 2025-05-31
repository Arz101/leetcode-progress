class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        if numRows == 1:
            return [[1]]
            
        dp = [[1], [1,1]]

        for i in range(1, numRows - 1):
            curr = [1] * (len(dp[i]) + 1)
            k = 0
            for j in range(1, len(curr) - 1):
                curr[j] = dp[i][k] + dp[i][k + 1]
                k+=1

            dp.append(curr)

        return dp
            
