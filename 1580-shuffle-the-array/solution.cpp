class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>x_y;
        int x,y;
        bool c = false;
        int i=0;
        while(i<=n){ 
            if(c and n < nums.size()){
                y = nums[n];
                x_y.push_back(y);
                c = false;
                ++n;
            }
            else if(not(c) and n < nums.size()){
                x = nums[i];
                x_y.push_back(x);
                ++i;
                c = true;                
            }
            else{
                break;
            }
        }
        return x_y;
    }
};
