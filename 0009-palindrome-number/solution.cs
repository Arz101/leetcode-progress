public class Solution {
    public bool IsPalindrome(int x) {
        string s = Convert.ToString(x);
        
        int j = 0;
        for(int i=s.Length - 1; i>0; i--){
            if(s[i] == s[j]) j++;
            else return false;
        }
        return true;
    }
}
