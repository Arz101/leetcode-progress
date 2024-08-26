class Solution {
    public String mergeAlternately(String word1, String word2) {
        String ans = ""; int n; boolean f;

        n = (word1.length() > word2.length())? word1.length() : word2.length();

        int i = 0;
        while(i<n){
            if(i >= word1.length()){
                while(i < word2.length()){
                    ans+=word2.charAt(i);
                    i++;
                }
                return ans;
            }if(i >= word2.length()){
                     while(i < word1.length()){
                    ans+=word1.charAt(i);
                    i++;
                }
                return ans;
            }

            ans+= word1.charAt(i);
            ans+= word2.charAt(i);
            i++;
        }
        return ans;
    }  
} 
