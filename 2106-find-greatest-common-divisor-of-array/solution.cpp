class Solution {
public:
    int findGCD(vector<int>& nums) {
        int max,min;
        sort(nums.begin(), nums.end());
        max = nums[nums.size()-1];
        min = nums[0];
        
        for(int i = max; i>0; --i){
            if((min % i == 0) && (max % i == 0)) return i;
        }
        
        return 0;
    }
};
