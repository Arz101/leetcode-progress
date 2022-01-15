class Solution {
public:
    int maxDepth(string s) {
        vector<int>x;
        
        int depth=0;
        for(auto i:s){ //(1+(2*3)+((8)/4))+1
            if(i == '(')depth++; // 1
            if(i == ')'){x.push_back(depth); depth--;}
        }
        if(x.empty()) return 0;
        depth = *max_element(x.begin(),x.end());
        return depth;
    }
};
