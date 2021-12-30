class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int n = nums.size();
        
        for(int key,j,i=0;i<n;++i){
            j = i;
            key = nums[i];
            while((j > 0) && (nums[j-1] == 0)){
                nums[j] = nums[j-1];
                j--;
            }
            nums[j] = key;
        }
    }
};
