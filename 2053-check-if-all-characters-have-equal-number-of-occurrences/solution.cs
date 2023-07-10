public class Solution {
    public bool AreOccurrencesEqual(string s) {
        Dictionary<char, int> str = new Dictionary<char, int>();


        for(int i=0; i<s.Length; i++){
            if(!str.ContainsKey(s[i])){
                str.Add(s[i], 1);
            }
            else str[s[i]] += 1;
        }
        return str.Values.All(v => v == str.Values.First());

    }
}
