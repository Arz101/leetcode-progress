public class Solution {
    public int CountGoodSubstrings(string s) {
        Dictionary<char, bool> letters = new Dictionary<char, bool>(); 
        int w = 3, i = 0, ans = 0;
        
        if(s.Length < 2) return 0;
        while(i < s.Length){
            int k = i;
            bool v = true;
            while(k < w){
                if(!letters.ContainsKey(s[k])) letters.Add(s[k], true);
                else {
                    v = false;
                    break;
                }
                k++;
            }
            letters.Clear();
            if(v) ans++;
            
            i++;
            if(w < s.Length) w++;
            else break;    
        }

        return ans;
    }
}
