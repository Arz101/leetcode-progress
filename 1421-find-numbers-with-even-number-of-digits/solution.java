class Solution {
    public int findNumbers(int[] nums) {
        String num = "";
        int ans = 0;
        
        for(int i = 0; i < nums.length; i++){
            num = String.valueOf(nums[i]);
            if(num.length() % 2 == 0) ans++;
        }
        
        return ans;
    }
}
