class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero=0;
        int numbers=0;
        int j=nums.size()-1;
        for(int i:nums){
            if(i==0)
                zero++;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[numbers++]=nums[i];
            }
        }while(zero--){
            nums[j--]=0;
        }
    }
};
