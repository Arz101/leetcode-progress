public class Solution {
    public int MyAtoi(string s) {
        if(s == "") return 0;
        HashSet<char> r = new HashSet<char>{
            '-', '0', '1', '2', '3', '4', '5', '6', '7', '8',
            '9', '+'
        };

        string num = "";
        foreach(var i in s){
            if(num != "" && (i == '-' || i == '+')) break;
            num += r.Contains(i) ? i : "";               
            if(!r.Contains(i) && i != ' ' || (num != "" && i == ' ')) break;
            if(i == ' ')continue;
        }
        string a = num.Trim();
        if(a == "") return 0;
        if(Int32.TryParse(a, out int ans)){
            return ans;
        }
        BigInteger big;
        if(BigInteger.TryParse(a, out big))
            return big > Int32.MaxValue? Int32.MaxValue : Int32.MinValue;
        return 0;
    }
}
