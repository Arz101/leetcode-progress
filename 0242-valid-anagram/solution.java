class Solution {
    public boolean isAnagram(String s, String t) {
        HashMap<Character, Integer> map = new HashMap<>();
        HashMap<Character, Integer> mapt = new HashMap<>();
        int n = s.length();
        int m = t.length();

        if(s.equals(t)) return true;
        if(m == 0 && n == 0 && (!s.equals(t))) return false; 
        if(m!=n) return false;
        for(int i = 0; i<Math.max(m,n); i++){
            if(i < m){
                if(!map.containsKey(s.charAt(i))) map.put(s.charAt(i), 1);
                else map.put(s.charAt(i), map.get(s.charAt(i))+1);
            }
            if(i < n){
                if(!mapt.containsKey(t.charAt(i))) mapt.put(t.charAt(i), 1);
                else mapt.put(t.charAt(i), mapt.get(t.charAt(i))+1);
            }
        }
        return map.equals(mapt);
    }
}
