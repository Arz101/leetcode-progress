class Solution {
public:
    int balancedStringSplit(string s) {
        int L=0,count=0; 
        
        for(int i=0;i<s.length();++i){
            if(s[i]=='L') L++;
            else if(s[i]!='L') L--;
            if(L==0) count++;
        }
        return count;
    }
};
