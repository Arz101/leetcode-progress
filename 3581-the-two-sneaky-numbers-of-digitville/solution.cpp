class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        int curr=-1;

        for(auto& i : nums){
            if(ans.size() > 2) return ans;
            if(i == curr){
                ans.push_back(curr);
            }else curr = i;
        }
        return ans;
    }
};
