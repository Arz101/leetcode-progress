class Solution:
    def checkIfPangram(self, sentence: str) -> bool:
        
        letters = {}
        for i in range(len(sentence)):
            letters[sentence[i]] = i
            if len(letters) >= 26:
                return True
        
        return False
