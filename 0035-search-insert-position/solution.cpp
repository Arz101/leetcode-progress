class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int min=0,max=nums.size()-1,ans;
        while(min<=max){
            ans = (max+min)/2;
            if(nums[ans] == target)return ans;
            else if(nums[ans] > target) max = ans-1;
            else min = ans+1;
        }
        
        return min;
    }
};
