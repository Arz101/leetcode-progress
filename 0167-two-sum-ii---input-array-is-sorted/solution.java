class Solution {
    public int[] twoSum(int[] numbers, int target) {
        Map<Integer, Integer> map = new HashMap<>();
        int c, index = 1;

        for(int i = 0; i<numbers.length; i++){
            c = target - numbers[i];
            if(map.containsKey(c)) return new int[]{map.get(c), index};
            else map.put(numbers[i], index);
            index++;
        }
        return null;
    }
}
