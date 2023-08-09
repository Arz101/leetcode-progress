public class Solution {
    public double MyPow(double x, int n) {
        return binaryExp(x, (BigInteger)n);
    }
    public double binaryExp(double x, BigInteger n){
        if(n == 0) return 1;
        if(n < 0) return 1.0 / binaryExp(x, -1 * n);

        if(n % 2 == 1)
            return x * binaryExp(x*x, n/2);
        else 
            return binaryExp(x * x, n/2);
        
    }
}
