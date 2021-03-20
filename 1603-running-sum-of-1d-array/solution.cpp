class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int last = nums.size()-1;
        
        for(int i=last;i>=0;--i){
            for(int j=i-1;j>=0;--j){
                nums[i] += nums[j];
            }
        }
        return nums;
    }
};
