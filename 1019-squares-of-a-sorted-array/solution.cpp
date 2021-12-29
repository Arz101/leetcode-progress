class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        
	    for(int i=0;i<n;++i){
		    nums[i] *= nums[i];
            ans.push_back(nums[i]);
        }
        
        for(int i=0,j,key;i<n;++i){
            j = i;
            key = ans[i];
            while((j > 0 ) && ans[j-1] > key){
                ans[j] = ans[j-1];
                --j;
            }
            ans[j] = key;
        }   
        return ans;
    }
};
