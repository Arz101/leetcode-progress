public class Solution {
    public void MoveZeroes(int[] nums) {
        List<int> arr = new List<int>();

        for(int i=0; i<nums.Length; i++){
            if(nums[i] != 0){
                arr.Add(nums[i]);
            } 
        }

        arr.AddRange(Enumerable.Repeat(0, nums.Length - arr.Count).ToList());
        
        for(int i = 0; i<nums.Length; i++){
            nums[i] = arr[i];
        }
    }
}
