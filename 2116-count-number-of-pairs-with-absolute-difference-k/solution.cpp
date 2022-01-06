class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int ans=0;
        
        for(auto i:nums){
            for(auto j:nums) j - i == k ? ans++:ans+=0;
        }
        return ans;
    }
};
