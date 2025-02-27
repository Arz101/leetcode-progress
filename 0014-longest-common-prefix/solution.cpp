class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int min = INT_MAX;

        for(int s = 0; s < strs.size(); s++) 
            if(min > strs[s].length()) 
                min = strs[s].length();

        int i = 0, prefix = 0;
        while(i < min){
            int j = 0;
            char common = strs[j][prefix];
            while(j < strs.size()){
                if(common != strs[j][prefix]){
                    return ans;
                }
                j++;
            }
            ans += common;
            prefix++;
            i++;
        }
        return ans;
    }
};
