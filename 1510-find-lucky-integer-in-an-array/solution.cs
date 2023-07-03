public class Solution {
    public int FindLucky(int[] arr) {
        
        Dictionary<int, int> nums = new Dictionary<int, int>();
        int ind=1;
        for(int i=0; i < arr.Length; i++){
            if(!nums.ContainsKey(arr[i])){
                nums.Add(arr[i], 1);
            }
            else nums[arr[i]] += 1;
        }
        int ans = 0;
        foreach (KeyValuePair<int, int> kvp in nums)
        {
            Console.WriteLine("{Clave: " + kvp.Key + ", Valor: " + kvp.Value + "}");
            if(ans < kvp.Value ){
                if(kvp.Value == kvp.Key){
                    ans = kvp.Value;
                }
            }
        }
        if(ans != 0) return ans;
        return -1;
    }
}
