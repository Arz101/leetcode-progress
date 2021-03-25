class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int v=nums.size();
        sort(nums.begin(),nums.end());
        return max((nums[v-3]*nums[v-2]*nums[v-1]),(nums[0]*nums[1]*nums[v-1]));
    }
};
