class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0; vector<int>ans;
        nums.push_back(0);
        for(int i=0;i<nums.size()-1;++i){
            if(nums[i] == 1) count++;
            else{
                ans.push_back(count); 
                count = 0;
            }
        }
        ans.push_back(count);
        int max = INT_MIN;
        for (auto val : ans) {
             if (max < val) max = val;
        }
        return max;
    }
};
