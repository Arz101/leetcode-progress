class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>map;
        int length = 0, start = -1;

        for(int i = 0; i != s.length(); i++){
            if(map.find(s[i]) != map.end()){
                start = max(start,map[s[i]]);
            }
            map[s[i]] = i;
            length = max(length, i - start);
        }
        return length;
    }
};
