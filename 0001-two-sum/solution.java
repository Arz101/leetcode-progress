class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> map = new HashMap<>();
        
        int cop;
        for(int i = 0; i < nums.length; i++){
            cop = target - nums[i];
            if(map.containsKey(cop)){
                return new int[] {map.get(cop),i};
            }
            else map.put(nums[i], i);
        }   
        return new int[]{};
    }
}
