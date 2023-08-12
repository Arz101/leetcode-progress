class Solution {
public:
    bool isValid(string s) {
        if(s.length() < 2) return false;
        unordered_map<char, char> hash{
            {'{','}'}, {'(',')'}, {'[',']'}
        };
        stack<char> r;

        for(auto i : s){
            if(i == '{' || i == '(' || i == '['){
                r.push(i);
            }
            else{
                if(!r.empty()){
                    if(hash[r.top()] == i){
                        r.pop();
                    }
                    else return false;
               }
               else return false;
            }
        }
        return r.size() == 0? true : false;
    }
};
