public class Solution {
    public bool IsMonotonic(int[] nums) {
        
        int j = 1; bool v = true;
        for(int i=0; j<nums.Length; i++){
            if(nums[i] <= nums[j] && v)
                j++;
            else{ 
                v = false;
                int k = 1;
                for(int r = 0; k<nums.Length; r++){
                    if(nums[r] >= nums[k] && !v){
                        k++;
                        continue;
                    }
                    else return false;
                }
                break;
            }
        }
        return true;
    }
}
