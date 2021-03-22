class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>numbers;
        // sort(nums.begin(),nums.end(), greater<int>());
        
        for(int i=0;i<nums.size();++i){
            int cont=0;
            for(int j=0;j<nums.size();++j){
                if(nums[i] > nums[j]) cont++;
            }
            numbers.push_back(cont);
        }
        return numbers;
    }
};
