class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int output = 0;
        vector<int>expected;
        
        for(int i=0;i<heights.size();++i){
            expected.push_back(heights[i]);
        }
        
        int i,pos,aux;
        for(i=0;i<expected.size();++i){
            pos = i;
            aux = expected[i];
            while((pos>0)&&(expected[pos-1]>aux)){
                expected[pos] = expected[pos-1];
                pos--;
            }
            expected[pos] = aux;
        }
        
        for(int i=0,j=0;i<heights.size();++i,++j){
            if(heights[i] != expected[j]) output++;
        }
        
        return output;
    }
};
