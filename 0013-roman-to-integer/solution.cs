public class Solution {
    public int RomanToInt(string s) {
        int ans = 0, i=0;
        string tp = "";
        Dictionary<char, int> Dict1 = new Dictionary<char, int>(){
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100},
            {'D', 500}, {'M', 1000}
        };
        Dictionary<string, int> Dict2 = new Dictionary<string, int>(){
            {"IV", 4}, {"IX", 9}, {"XL", 40}, {"XC", 90}, {"CD", 400},
            {"CM", 900}
        };

        while(i < s.Length){
            tp = (i < s.Length - 1) ?  Convert.ToString(s[i]) + Convert.ToString(s[i+1]) : Convert.ToString(s[i]);
            if(Dict2.ContainsKey(tp)){
                ans += Dict2[tp];
                i++;
            }
            else{
                ans += Dict1[s[i]];
            }
            
            i++;
        }
        return ans;

    }
}



