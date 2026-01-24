class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if not strs:
            return ""

        first = strs[0]
        for i, ch in enumerate(first):
            for word in strs[1:]:
                if i >= len(word) or word[i] != ch:
                    return first[:i]
        return first
