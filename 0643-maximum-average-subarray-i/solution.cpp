class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double average = 0;
        double current = 0;
        
        int i = 0;
        for(i = 0; i < k; i++){
            current += nums[i];
        }

        average = current/k;
        for(; i < nums.size(); i++){
            current -= nums[i - k];
            current += nums[i];
            
            average = max(average,current/k);
        }
        return average;
    }
};
