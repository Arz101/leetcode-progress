class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        map = {')':'(', '}':'{', ']':'['}
        
        for _, key in enumerate(s):
            if key in map.values():
                stack.append(key)

            elif stack and key in map and map[key] == stack[-1]:
                del stack[-1]            

            else: return False

        return True if not stack else False
