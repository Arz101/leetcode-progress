class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size(); i++)
            if(binarySearch(nums[i], nums, i)) 
                return nums[i];

        return 0;
    }

    bool binarySearch(int x, vector<int>& nums, int i){
        int low = 0, high = nums.size() - 1;

        while(low <= high){
            int mid = low + (high - low) / 2;
            
            if(nums[mid] == x && mid != i) return true;
            
            else if(nums[mid] < x) low = mid+1;
            else high = mid - 1;
        }
        return false;
    }
};
