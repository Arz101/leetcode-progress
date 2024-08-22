import java.util.Iterator; 
import java.util.Map; 
import java.util.Set; 
import java.util.SortedMap; 
import java.util.TreeMap; 

class Solution {
    public String[] sortPeople(String[] names, int[] heights) {
        SortedMap<Integer, String>Map = new TreeMap<Integer, String>();
        

        for(int i = 0; i < names.length; i++){
            Map.put(heights[i], names[i]);
        }

        String[] ans = new String[names.length];
        int i = names.length - 1;

        for(var s : Map.keySet()){
            ans[i] = Map.get(s);
            i--;
        }
        return ans;
    }
}
