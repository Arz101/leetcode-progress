class Solution {
public:
    int romanToInt(string s) {
        std::unordered_map<char, int> map;
        map['I'] = 1;
        map['V'] = 5;
        map['X'] = 10;
        map['L'] = 50;
        map['C'] = 100;
        map['D'] = 500;
        map['M'] = 1000;

        int ans = 0;

        for (auto it = s.rbegin(); it != s.rend(); ++it) {
            if((( *it == 'X' || *it == 'V') && *(it + 1) == 'I')) {
                ans += map[(*it)] - map[*(++it)];

            } else if ((( *it == 'L' || *it == 'C') && *(it + 1) == 'X')) {
                ans += map[(*it)] - map[*(++it)];
            
            } else if ((( *it == 'D' || *it == 'M') && *(it + 1) == 'C')) {
                ans += map[(*it)] - map[*(++it)];
            } else {
                ans += map[(*it)];
            }
        }
        return ans;
    }
};
