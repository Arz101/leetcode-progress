class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0; int current;

        for(auto& i : nums){
            if(count == 0) current = i;
            if(i == current) count++;
            else count--;
        }
        return current;
    }
};
