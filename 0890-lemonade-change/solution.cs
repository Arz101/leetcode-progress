public class Solution {
    public bool LemonadeChange(int[] bills) {
        Dictionary<int, int> r = new Dictionary<int, int>{
            {5,0}, {10,0},{20,0}
        };
        
        foreach(var i in bills){
            if(i == 5) r[5]+=5;
            if(i == 10){
                r[10] += 10;
                r[5]-=5; 
                if(r[5] < 0) return false;
            } 
            if(i == 20){
                r[20] += 20;
                if(r[5] != 0 && r[10] != 0){
                    r[5]-=5;
                    r[10]-=10;
                    continue;
                }
                if(r[5] >= 15) r[5]-=15;
                
                else return false;
            }
        }
        return true;
    }
}
