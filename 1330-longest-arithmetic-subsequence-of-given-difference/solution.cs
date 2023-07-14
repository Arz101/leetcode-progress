public class Solution {
    public int LongestSubsequence(int[] arr, int difference) {
        Dictionary<int, int> nums = new Dictionary<int, int>();
        int ans = 1;

        foreach(var i in arr){
            int a = nums.ContainsKey(i - difference) ? nums[i - difference] : 0;
            nums[i] = a+1;
            ans = Math.Max(ans, nums[i]);
        }      
        return ans;

    }
}
