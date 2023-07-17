public class Solution {
    public bool RepeatedSubstringPattern(string s) {
        int n = s.Length;

        for(int i = 1; i<=n/2; i++){
            if(n % i == 0){
               string patter = "";
               for(int j = 0; j < n/i; j++){
                   patter += s.Substring(0,i);
                } 
                if(s == patter){
                    return true;
                }
            }
        }
        return false;
    }
}
