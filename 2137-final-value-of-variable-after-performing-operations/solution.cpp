class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        
        for(auto i:operations) x = i[1] == '-'? x - 1 : x + 1;
        
        return x;
    }
};
