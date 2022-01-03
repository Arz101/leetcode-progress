class Solution {
public:
    string firstPalindrome(vector<string>& words) {
            int n = words.size();

            for(int i=0;i<n;++i){
            string ans = words[i];
            string polindromic = "";
            for(int j=ans.length()-1;j>=0;--j){
                polindromic += ans[j];
            }
            if(polindromic == ans) return ans;
        }
        return "";
    }
};
