class Solution {
public:
    int search(vector<int>& nums, int target) {
    	int max = nums.size()-1;
    	int min = 0;
    	int guess;
        
	    while(max>=min){
	    	guess = (max+min)/2;
    		if(nums[guess] == target) return guess;
            if(nums[guess] < target) min = guess+1;
            else max = guess-1;
	    }
        return -1;
    }
};
