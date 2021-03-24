class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>x;
        
        for(int i=1;i<nums.size();i+=2){
            int value = 0;
            if(nums[i] > nums[i-1]){
                value = nums[i-1];
                while(value>0){
                    x.push_back(nums[i]);
                    value--;
                }
            }
            else{
                if(nums[i] <= nums[i-1]){
                    value = nums[i-1];
                    while(value>0){
                        x.push_back(nums[i]);
                        value--;
                    }
                }
            }
        }
        return x;
    }
};
