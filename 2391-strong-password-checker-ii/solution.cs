public class Solution {
    public bool StrongPasswordCheckerII(string s) {
        if(s.Length < 8) return false;

        HashSet<char> num = new HashSet<char>{
            '1', '2', '3', '4', '5', '6', '7', '8', '9', '0'
        };
        HashSet<char> letters = new HashSet<char>{
            'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
            'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
            's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
        };
        HashSet<char> sim = new HashSet<char>{
            '!', '#', '$', '%', '^', '&', '*', '(', ')',
            '-', '+', '@' 
        };
        HashSet<char> L = new HashSet<char>{
            'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'
        };
        int j = 1;
        bool x = false, y = false, z = false, l = false;
        for(int i = 0; i<s.Length; i++){
            char r = s[i];
            char c = j == s.Length ? ' ' : s[j];

            if(r == c)return false;

            if(num.Contains(r) && !x) x = true;
            
            else if(sim.Contains(r) && !y)y = true;
            
            else if(letters.Contains(r))z = true;
            
            else if(L.Contains(r)) l = true;
            j++;
        }

        if(x == true && y == true && z == true && l) return true;

        return false;
    }
}
