class Solution:
    def mostWordsFound(self, sentences: List[str]) -> int:
        count_list = []
        
        for word in sentences:
          count = 0
          new_str = word.split()
          
          for i in new_str:
            count +=1
          count_list.append(count)
          
        return max(count_list)
