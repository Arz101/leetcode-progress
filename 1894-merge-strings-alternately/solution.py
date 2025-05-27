class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        mergeStr = ""

        size = len(word1) if len(word1) > len(word2) else len(word2)

        i = 0 
        j = 0
        while i < size:
            if i < len(word1):
               mergeStr += word1[i]
            if j < len(word2):
                mergeStr += word2[j]
            i+=1
            j+=1
        return mergeStr
