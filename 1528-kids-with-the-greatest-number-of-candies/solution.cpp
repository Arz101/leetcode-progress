class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int candiesMax=0;
        vector<bool>rtrn;
        
        
        for(int i=0;i<candies.size();i++){
            if(candiesMax < candies[i]){
                candiesMax = candies[i];
            }
        }
        for(int i=0;i<candies.size();i++){
            if(candies[i] < candiesMax){
                candies[i] += extraCandies;
                if(candies[i] >= candiesMax){
                    rtrn.push_back(true);
                }else{
                    rtrn.push_back(false);
                }
            }else{
                if(candies[i] == candiesMax){
                    rtrn.push_back(true);
                }
            }
        }
        return rtrn;
    }
};
