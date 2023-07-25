public class Solution {
    public bool JudgeCircle(string moves) {
        int x = 0, y = 0;

        foreach(var i in moves){
            x += i == 'U' ? 1 : (i == 'D' ? -1 : 0);
            y += i == 'L' ? 1 : (i == 'R' ? -1 : 0);
        }
        return x == 0 && y == 0;
    }
}
