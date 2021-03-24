class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=0;
        gain.insert(gain.begin(),0);
        
        for(int i=1;i<gain.size()-1;++i){
            gain[i+1] += gain[i];
        }
        for(int i=0;i<gain.size();++i){
           n = n < gain[i]? gain[i]:n;
        }
        return n;
    }
};
