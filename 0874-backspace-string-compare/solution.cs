public class Solution {
    public bool BackspaceCompare(string s, string t) {
        Stack<char> stack = new();
        Stack<char> stack1 = new();
        int n = Math.Max(s.Length, t.Length);
        
        int i = 0, j = 0;
        while(i <= n - 1){
            if(i < s.Length && s[i] != '#') stack.Push(s[i]);
            
            if(i < t.Length && t[i] != '#') stack1.Push(t[i]);
            
            
            if(i < t.Length && t[i] == '#' && stack1.Count != 0) stack1.Pop();
            if(i < s.Length && s[i] == '#' && stack.Count != 0) stack.Pop();
            
            i++;
        }
        string r = new string(stack.ToArray());
        string c = new string(stack1.ToArray());
        return r == c;
    }
}
