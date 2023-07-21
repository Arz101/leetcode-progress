public class Solution {
    public int Fib(int n) {
        if(n == 1 || n == 0) return n;

        return Fib(n - 1) + Fib(n - 2);
    }
}
