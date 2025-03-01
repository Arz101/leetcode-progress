class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        vector<int> n;

        for(int i = 0; i+1 < nums.size(); i++){
            if(nums[i] == nums[i+1]){
                nums[i] = nums[i] * 2;
                nums[i+1] = 0;
            }
        }
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0) n.push_back(nums[i]);
        } 
        while(n.size() != nums.size()) n.push_back(0);

        return n;
    }
};
