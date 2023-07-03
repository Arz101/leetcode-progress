public class Solution {
    public int FinalValueAfterOperations(string[] operations) {
        
        Dictionary<string, int> opt = new Dictionary<string, int>(){
            {"--X", -1},
            {"X--", -1},
            { "X++", 1},
            { "++X", 1}
        };

        int X = 0;
        foreach(var i in operations){
            if(opt.ContainsKey(i)){
                X+= opt[i];
            }
        }
        return X;
    }
}
