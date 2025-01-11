class Solution {
    public int majorityElement(int[] nums) {
        HashMap<Integer, Integer> map = new HashMap<>();

        for(var i : nums){
            if(!map.containsKey(i)) map.put(i, 1);
            else map.put(i, map.get(i)+1);
        }

        int ans=Integer.MIN_VALUE;
        int a=0;
        for(var i : map.keySet()){
            if(map.get(i) > ans) {
                ans = map.get(i);
                a = i;
            }
        }

        return a;
    }
}
