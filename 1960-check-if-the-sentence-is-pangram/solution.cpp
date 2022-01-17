class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int>letters;
        int s = sentence.length();
        
        for(int i = 0; i < s; ++i){
            letters[sentence[i]] = 0;    
            if(letters.size() >= 26) return true;
        }
        return false;
    }
};
