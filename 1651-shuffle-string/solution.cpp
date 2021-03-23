class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        
        for(int i=0;i<indices.size();++i){
            for(int j=i;j<indices.size();++j){
                if(indices[i] > indices[j]){
                    swap(indices[i],indices[j]);
                    swap(s[i],s[j]);
                }
            }
        }
        return s;
    }
};
