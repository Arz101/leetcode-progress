class Solution {
    public int getLucky(String s, int k) {
        String num = "";

        for (char ch : s.toCharArray()) {
            num += Integer.toString(ch - 'a' + 1);
        }

        int ans = 0;
        while(k-- > 0){
            ans = 0;
            for(char i : num.toCharArray()){
                ans += Character.getNumericValue(i);
            }
            num = String.valueOf(ans);
        }

        return ans;
    }
}
