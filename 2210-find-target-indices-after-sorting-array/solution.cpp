class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        for(int it = 0; it < nums.size(); it++){
            if(nums[it] == target) ans.push_back(it);
            else {
                if(nums[it] > target)break;
            }
        }
        return ans;
    }
};
