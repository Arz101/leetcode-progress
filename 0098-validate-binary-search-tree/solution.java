/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    List<Integer> list = new ArrayList<>();
    public boolean isValidBST(TreeNode root) {
        int j = 1;
        dfs(root);
        for(int i = 0; j < list.size(); i++){
            if(list.get(i) < list.get(j)) j++;
            else return false;
        }
        return true;
    }

    private void dfs(TreeNode root){
        if(root == null) return;
        dfs(root.left);
        list.add(root.val);
        dfs(root.right);
    }
}
