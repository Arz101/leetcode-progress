class Solution {
public:
    string toLowerCase(string str) {
        
        for(size_t i=0;i<str.length();i++){
            
            char caracter = tolower(str[i]);
            str[i] = caracter;
        }
        return str;
    }
};
