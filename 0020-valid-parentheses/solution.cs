public class Solution {
    public bool IsValid(string s) {
        if(s.Length <= 1) return false;
        Dictionary<char, char> pair = new Dictionary<char, char>(){
            {'{', '}'}, {'[', ']'}, {'(', ')'}
        };
        Stack<char> stack = new Stack<char>();

        foreach(var i in s){
            if(i == '(' || i == '{' || i == '['){
                stack.Push(i);
            }
            else{
                if(stack.Count() > 0){
                    if(pair[stack.Peek()] == i)
                        stack.Pop();
                    else return false;
                }
                else return false;   
            }             
            
        }
        return stack.Count() == 0? true : false;
    }
}
