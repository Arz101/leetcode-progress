public class Solution {
    public int DiagonalSum(int[][] mat) {
        int rows = mat.Length;
        int col = mat[0].Length;
        List<int> c = new List<int>();

        //
        int i = 0, j = 0;
        while(i < rows && j < col){
            c.Add(mat[i][j]);

            int m = (col - 1) - j;
            for(int r = i; r <= i; r++){
                if(mat[i][j] == mat[r][m] && j == m) continue;
                c.Add(mat[r][m]);
            }
            i++;
            j++;
        }

        int ans = 0;
        foreach(var x in c) ans += x;
        return ans;
    }
}
