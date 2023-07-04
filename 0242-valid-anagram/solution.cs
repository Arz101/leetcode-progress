public class Solution {
    public bool IsAnagram(string s, string t) {

        if(s.Length != t.Length) return false; 
        if(s == t) return true;       
        Dictionary<char, int> letters = new Dictionary<char, int>();
        Dictionary<char, int> letters2 = new Dictionary<char, int>();
        
        for(int i=0; i<s.Length; i++){
            letters[s[i]] = 1 + (letters.ContainsKey(s[i]) ? letters[s[i]] : 0);  
            letters2[t[i]] = 1 + (letters2.ContainsKey(t[i]) ? letters2[t[i]] : 0);
        }
        return letters.OrderBy(kv => kv.Key).SequenceEqual(letters2.OrderBy(kv => kv.Key));
    }
}
