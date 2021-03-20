class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int ruleKV=0;
        
        for(int i=0;i<items.size();i++){
            if(ruleKey=="type" and items[i][0] == ruleValue)ruleKV++;
            if(ruleKey=="color" and items[i][1] == ruleValue)ruleKV++;
            if(ruleKey=="name" and items[i][2] == ruleValue)ruleKV++;
        }
        return ruleKV;
    }
};
