public class Solution {
    public int Reverse(int x) {
        string num = x.ToString();
        
        string n = new string(num.Reverse().ToArray());   
        if(n.Contains("-")){
            num = n.Remove(n.Length - 1); 
            return (BigInteger.Parse(num) * -1) < Int32.MinValue? 0 : Int32.Parse(num) * -1;
        }
        return BigInteger.Parse(n) > Int32.MaxValue? 0 : Int32.Parse(n);
    }
}
