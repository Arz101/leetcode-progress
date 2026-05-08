class Solution {
    public List<List<String>> groupAnagrams(String[] s) {
        List<List<String>> list = new ArrayList<>();

        var x = new HashSet<String>();
        for (int i = 0; i < s.length; i++){
            if (x.contains(s[i])) continue; 
            List<String> l = new ArrayList<>();
            l.add(s[i]);
            for (int j = i+1; j < s.length; j++){
                if (s[i].length() != s[j].length()) 
                    continue;
                
                char[] s1 = s[i].toCharArray();
                char[] s2 = s[j].toCharArray();
                Arrays.sort(s1);
                Arrays.sort(s2);

                if (Arrays.equals(s2,s1)){
                    l.add(s[j]);
                    x.add(s[j]);
                } 
            }
            list.add(l);
        }
        return list;
    }
}

