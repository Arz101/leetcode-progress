public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        Dictionary<int, int> map = new Dictionary<int,int>();

        for(int i = 0; i < nums.Length; i++){
            int complement = target - nums[i];
            if(map.ContainsKey(complement)){
                return new int[]{i, map[complement]};
            }
            else {
                if(!map.ContainsKey(nums[i]))map.Add(nums[i], i);
            }
        }

        return new int[]{};
    }
}
