public class Solution {
    public int SumOfUnique(int[] nums) {
        Dictionary<int, int> hash = new();

        foreach(int i in nums){
            if(!hash.ContainsKey(i))
                hash.Add(i,1);
            else hash[i] += 1;
    
        }
        return hash.Where(pair => pair.Value == 1).Sum(pair => pair.Key);
    }
}
