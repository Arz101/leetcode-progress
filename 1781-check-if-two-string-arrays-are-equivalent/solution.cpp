class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string x="",z="";
        
        for(int i=0;i<word1.size();++i) x += word1[i];
        for(int i=0;i<word2.size();++i) z += word2[i];
        return x==z? true:false;
    }
};
