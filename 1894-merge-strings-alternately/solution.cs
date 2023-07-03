public class Solution {
    public string MergeAlternately(string word1, string word2) {
        string ans = "";

        int A = 0, B = 0; 
        while(A < word1.Length && B < word2.Length){
            ans += word1[A];
            ans += word2[B];

            A++;
            B++;  
        }

        if(word1.Length > word2.Length){
            for(int i = word2.Length; i < word1.Length; i++){
                ans += word1[i];
            }
            return ans;
        }
        if(word2.Length > word1.Length){
            for(int i = word1.Length; i < word2.Length; i++){
                ans += word2[i];
            }
            return ans;
        }
        
        return ans;
    

    }
}
