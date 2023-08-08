public class Solution {
    public string Multiply(string num1, string num2) {
        return Convert.ToString(BigInteger.Parse(num1) * BigInteger.Parse(num2));
    }
}
