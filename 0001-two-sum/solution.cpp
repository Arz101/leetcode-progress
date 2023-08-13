class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> r;

        for(int i=0;i<nums.size(); i++){
            int n = target - nums[i];
            if(r.find(n) != r.end()){
                return {i, r[n]};
            }
            r[nums[i]] = i;
        }
        return {};
    }
};
