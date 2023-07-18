public class Solution {
    public string AddStrings(string num1, string num2) {
        BigInteger a, b;
        BigInteger.TryParse(num1, out a);
        BigInteger.TryParse(num2, out b);

        return Convert.ToString(a+b);
    }
}
