public class Solution {
    public void Rotate(int[] nums, int k) {
        List<int> r = nums.ToList();
        for(int i=0; i<nums.Length; i++)
            nums[(i+k)%nums.Length] = r[i]; 
    }
}
