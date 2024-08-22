import java.util.*;
class Solution {
    public int[] frequencySort(int[] nums) {
        HashMap<Integer, Integer> map = new HashMap<Integer, Integer>();
        int[] ans = new int[nums.length];
        /// map = <value, Frequency>
        for(int i = 0; i < nums.length; i++){
            if(!map.containsKey(nums[i])){
                map.put(nums[i], 1);
            }
            else {
                Integer val = map.get(nums[i]);
                map.put(nums[i], val+1);
            }
        }
        Map<Integer,Integer> sorted = new LinkedHashMap<>();
                map.entrySet().stream().sorted((entry1, entry2) -> {
                    int valueCom = entry1.getValue().compareTo(entry2.getValue());
                    if(valueCom != 0){
                        return valueCom;
                    } else{
                        return entry2.getKey().compareTo(entry1.getKey());
                    }
                }).forEachOrdered(entry -> sorted.put(entry.getKey(), entry.getValue()));
        
        int index = 0;
        Set set = sorted.entrySet();
        Iterator it = set.iterator();
       
        while(it.hasNext()){
            Map.Entry m = (Map.Entry) it.next();
            int frequency = (int)m.getValue();
            int key = (int)m.getKey();
            System.out.println("Frequency: " + frequency + " key: " + key);


                while(frequency > 0){   
                    ans[index] = key;
                    index++; 
                    frequency--;
                }   
            
        }
        return ans;
    }

    private void SortMap(HashMap<Integer, Integer> map){

    }
}
