class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int x = digits.size()-1;
        
        while(x>=0){
            if(digits[x]+1==10){
                digits[x] = 0;
            }
            else{
                digits[x] += 1;
                return digits;
            }
            --x;
        }
        vector<int> decimals(digits.size()+1);
        decimals[0] = 1;
        return decimals;
    }
};
