class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int i=0,n=s.size()-1,temp;
        
        while(i<n){
            temp = s[i];
            s[i] = s[n];
            s[n] = temp;
            n--;
            i++;
        }
        
    }
};
