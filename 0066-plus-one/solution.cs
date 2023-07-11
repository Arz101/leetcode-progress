public class Solution {
    public int[] PlusOne(int[] digits){
        string str = string.Join("", digits);
        BigInteger num = BigInteger.Parse(str);
        str = Convert.ToString(num + 1);
        int[] ans = new int[str.Length];
        
        for(int j=0; j<str.Length ; j++){
            int numInStr;
            
            if (int.TryParse(str[j].ToString(), out numInStr)){
                ans[j] = numInStr;
            }
        }
        return ans;
    }
}
