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
    int i = 0;
    public boolean hasPathSum(TreeNode root, int targetSum) {
        if(root==null) return false;
       
        if(targetSum - root.val == 0 && i != 0) {
            if(root.left == null && root.right == null){
                return true;
            }
        }
        i++;
        if(hasPathSum(root.left,targetSum - root.val)) return true;
        
        if(hasPathSum(root.right,targetSum - root.val)) return true;
        
        else {
            if(targetSum == 0) return false;
            if(root.left == null && root.right == null && i == 1) return true;
        }

        return false;
    }
}
