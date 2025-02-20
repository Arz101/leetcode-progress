class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int x) {
        int index;


        for(int i = 0; i < k; i++){
            int min = INT_MAX;
            for(int j = 0; j < nums.size(); j++){
                if(nums[j] < min) {
                    min = nums[j];
                    index = j;
                }
            }
            nums[index] *= x ;
        }
        return nums;
    }
};
