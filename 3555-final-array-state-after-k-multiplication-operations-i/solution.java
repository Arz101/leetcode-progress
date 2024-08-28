class Solution {
    public int[] getFinalState(int[] nums, int k, int multiplier) {
        int min = Integer.MAX_VALUE, pos = 0;
        int j = 0;
        while(j < k){
            for(int i = 0; i < nums.length; i++){
                if(min>nums[i]) {
                    min = nums[i]; 
                    pos = i;
                }
            }
            nums[pos] = min*multiplier;
            min = Integer.MAX_VALUE;
            j++;
        } 
        return nums;
    }
}
