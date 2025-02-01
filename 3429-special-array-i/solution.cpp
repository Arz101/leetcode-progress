class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        
        if(nums.size() == 1) return true;

        for(size_t i = 0; i < nums.size(); ++i){
            if(i >= nums.size()-1) break;
            if(nums[i] % 2 == 0 && nums[i+1] % 2 != 0){
                continue;
            }
            else if(nums[i] % 2 != 0 && nums[i+1] % 2 == 0){
                continue;
            }
            else return false;
        }
        return true;
    }
};
