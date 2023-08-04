public class Solution {
    public IList<int> AddToArrayForm(int[] num, int k) {
        List<int> ans = new();
        string str = string.Join("", num);
        
        BigInteger n;
        if(BigInteger.TryParse(str, out n)){
            n += k;
            str = n.ToString();
        }
        foreach(char i in str) ans.Add(int.Parse(i.ToString()));
        return ans;
    }
}
