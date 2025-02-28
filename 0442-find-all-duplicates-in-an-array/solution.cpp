class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        int curr=-1;

        for(auto& i : nums){
            if(i == curr){
                ans.push_back(curr);
            }else curr = i;
        }
        return ans;
    }
};
