public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        Dictionary<int, int> hash = new Dictionary<int, int>();

        for(int i=0; i<nums.Length; i++){
            int n = nums[i];
            int complement = target - n;
            if(hash.ContainsKey(complement)){
                return new int[] {hash[complement], i};                
            }
                
            hash[nums[i]] = i;
        }
        return new int[] {0};
    }
}
