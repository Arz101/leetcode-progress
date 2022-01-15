class Solution {
public:
    string truncateSentence(string s, int k) {
        vector<string>x;
        
        s+=" ";
        string l="", ans = "";
        for(auto i:s){ 
            l += i;
            if(i == ' '){ 
                x.push_back(l);
                l = "";
            }
        }
        for(int j=0;j<k;++j){
            ans += x[j];
        }
        int n = ans.length() - 1;
        ans.erase(ans.begin()+n);
        
        
        
        return ans;
    }
};
