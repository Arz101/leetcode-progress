public class Solution {
    public int CalPoints(string[] operations) {
        Stack<int> stack = new Stack<int>();
        int score = 0;
        
        foreach(var s in operations){
            if(s != "D" && s != "C" && s != "+")
                stack.Push(Int32.Parse(s));
            if(s == "C")
                stack.Pop();
            if(s == "D")
                stack.Push(2 * stack.Peek());
            if(s == "+"){ 
                int x = stack.Pop();
                int y = stack.Pop();
                stack.Push(y);
                stack.Push(x);                
                stack.Push(x + y);
            }
        }
        foreach(var i in stack) score += i;
        return score;
    }
}
