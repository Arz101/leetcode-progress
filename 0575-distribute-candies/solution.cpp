class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int candy=0;
        bool x=true;
        
        for(int j=candyType.size()-1;j>0;--j){
            if(candyType[0] == candyType[j])candy = 1;
            else{
                x = false;
                break;
            }
        }  
        set<int> b{begin(candyType),end(candyType)};
        if(b.size() < candyType.size()/2) candy = b.size(); 
        else if(!x) candy = candyType.size()/2;

       return candy;
    }
};
