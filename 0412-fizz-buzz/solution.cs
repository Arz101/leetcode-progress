public class Solution {
    public IList<string> FizzBuzz(int n) {
        List<string> list = new();

        for(int i=1; i<=n; i++){
            if(i % 3 == 0 && i % 5 == 0){
                list.Add("FizzBuzz");
                continue;
            }
            if(i % 3 == 0) list.Add("Fizz");
            if(i % 5 == 0) list.Add("Buzz");
            
            if(i % 3 != 0 && i % 5 != 0) list.Add(i.ToString());
        }

        return list;
    }
}
