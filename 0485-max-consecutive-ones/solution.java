class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int max = 0, min = 0;
        if(nums.length - 1 == 0) return (nums[0] >= 1)? 1 : 0;
        
        for(int i = 0; i <= nums.length -1; i++){
            if(nums[i]!=0) max++;
            else {
                min = (min>max)? min:max;
                max = 0;
            }
        }
        
        return (min>max)? min:max;
    }
}
