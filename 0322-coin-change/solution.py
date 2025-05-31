class Solution:
    def coinChange(self, coins: List[int], amount: int) -> int:
        INT_MAX = 99999999
        dp = [INT_MAX] * (amount + 1)
        dp[0] = 0

        for i in range(1, amount + 1):
            for coin in coins:
                if i - coin >= 0:
                    dp[i] = min(dp[i], dp[i - coin] + 1)
        
        return -1 if dp[amount] == INT_MAX else dp[amount]


