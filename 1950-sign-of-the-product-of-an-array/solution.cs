public class Solution {
    public int ArraySign(int[] nums) {
        long sum = 1;
        for(int i = 0; i < nums.Length; i++){
            if(nums[i] == 0) return 0;
            if(nums[i] < 0) nums[i] = -1;   
            else nums[i] = 1;
            sum *= nums[i];         
        }
        return (sum >= 1)? 1 : -1;
    }
}
