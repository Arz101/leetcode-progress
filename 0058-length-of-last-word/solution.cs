public class Solution {
    public int LengthOfLastWord(string s) {
        int ans = 0;
        bool v = true;
        //if(s.Length <= 1) return 1; 

        for(int i=s.Length - 1; i>=0; i--){ 
            if(s[i] == ' ' && v) i--;
            if(!v && s[i]==' ') return ans; 
            if(s[i] != ' '){
                v = false;
                ans++;
            } 
        }    
        return ans;
    }
}
