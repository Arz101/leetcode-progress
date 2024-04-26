class Solution {
    public List<String> fizzBuzz(int n) {
        List<String> ans = new ArrayList<>();
        String s;

        for(int i=1; i<=n; i++){      
            s = (i%3 == 0 && i%5 == 0)? "FizzBuzz" : (i%5 == 0) ? "Buzz" : (i%3 == 0) ? "Fizz" : String.valueOf(i);
            ans.add(s);
        } 
        return ans;
    }
}
