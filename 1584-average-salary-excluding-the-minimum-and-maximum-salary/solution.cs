public class Solution {
    public double Average(int[] salary) {
        double ans = 0;
        Array.Sort(salary);
        for(int i = 1; i<salary.Length - 1; i++){
            ans += salary[i];
        }
        return ans / (salary.Length - 2);
    }
}
