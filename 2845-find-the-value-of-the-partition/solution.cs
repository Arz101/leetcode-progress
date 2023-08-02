public class Solution {
    public int FindValueOfPartition(int[] nums) {
        Array.Sort(nums);
        
        int min = Int32.MaxValue;

        for(int i = 1; i<nums.Length; i++){
            min = Math.Min(nums[i] - nums[i-1], min);
        }
        
        return min;
    }
}
