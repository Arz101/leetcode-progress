public class Solution {
    public int SingleNumber(int[] nums) {
        Dictionary<int, int> dc = new();

        foreach(var i in nums){
            if(!dc.ContainsKey(i)) dc.Add(i, 1);
            else dc[i]++;
        }

        var ans = dc.FirstOrDefault(pair => pair.Value == 1);
        
        return ans.Key;
    }
}
