class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>alt;
        int n = gain.size();
        int high = 0,sum = 0;
        
        alt.insert(alt.begin(),0);
        for(int i = 0;i<gain.size();++i){
            sum += gain[i];
            alt.push_back(sum);
        }
        for(int i=0;i<alt.size();++i){
            if(high<alt[i]) high = alt[i];
        }
        
        return high;
    }
};
