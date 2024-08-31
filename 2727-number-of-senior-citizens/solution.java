class Solution {
    public int countSeniors(String[] details) {
        int ans = 0;
        for(var arr : details){
            ans = (Integer.parseInt(arr.substring(11,13)) > 60) ? ans+1:ans;
        }
        return ans;
    }
}
