class Solution {
public:
    string reverseWords(string s) {
        vector<int> space;

        for(int i=0;i<s.length();++i){
            if(s[i] == ' ') space.push_back(i);
        }
        space.push_back(1);
        
        int i=0,pos=0,j;
        while(pos<=space.size()-1){
            if(pos == space.size()-1) j = s.length()-1;
            else j = space[pos] - 1;
           
            while(i<j){
                swap(s[i],s[j]);
                j--;
                i++;
            }
            i = space[pos] + 1;
            ++pos;
        }
        return s;
    }
};
