public class Solution {
    public char FindTheDifference(string s, string t) {
        Dictionary<char, int> dictS = new Dictionary<char, int>();
        Dictionary<char, int> dictT = new Dictionary<char, int>();
        
        for(int i=0; i < s.Length; i++){
            if(!dictS.ContainsKey(s[i])){
                dictS.Add(s[i], 1);
            }
            else{
                dictS[s[i]] += 1;
            }
        }
        for(int i=0; i < t.Length; i++){
            if(!dictT.ContainsKey(t[i])){
                dictT.Add(t[i], 1);
            }
            else{
                dictT[t[i]] += 1;
            }
        }

        foreach(var i in dictT.Keys){
            Console.WriteLine(i);
            if(!dictS.ContainsKey(i)){
                return i;
            }
            else if(dictT[i] > dictS[i]) return i;
        }
        return ' ';
    }
}
