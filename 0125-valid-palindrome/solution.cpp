class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(std::remove_if(s.begin(), s.end(), [](char c) {
        return  c == ':' || c == ',' || c == ' ' || c == '!' || c == '#' || c == '$' ||
                c == '%' || c == '&' || c == '/' || c == '(' || c == ')' || c == '=' || c == '?' || c == '-' ||
                c == '[' || c == ']' || c == '{' || c == '}' || c == '^' || c == '.' || c == ';' || 
                c == '_' || c == '*' || c == '+' || c == '<' || c == '>' || c == '\\' || c == '\"' ||
                c == '@' || c == '\''|| c == U'´'||c == U'`';
        }), s.end());
        
        if(s=="")return true;
        
        for(auto& c : s) c = tolower(c);
        cout << s << endl;
        int i = 0, j = s.length() - 1;
        while(i != j && j < s.length() && i < s.length()){
            if(s[i] != s[j]) return false;
            i++; j--;
        }
        return true;
    }
};
