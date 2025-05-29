class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        ans = []
        num = 0
        for _,i in enumerate(digits):
            num = (num + i) * 10

        num = (num // 10) + 1

        while num != 0:
            get = num % 10
            ans.insert(0,get)

            num = num // 10

        return ans
