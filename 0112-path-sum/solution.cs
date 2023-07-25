/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     public int val;
 *     public TreeNode left;
 *     public TreeNode right;
 *     public TreeNode(int val=0, TreeNode left=null, TreeNode right=null) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
public class Solution {
    private Stack<int> stack = new Stack<int>();
    public bool HasPathSum(TreeNode root, int targetSum) {
        if(root == null) return false;
        
        int n = targetSum - root.val;
        stack.Push(n);
        if(stack.Count >= 1 && root.right == null && root.left == null && n == 0) return true;
        
        if(HasPathSum(root.left, n)) return true;
        
        if(HasPathSum(root.right, n)) return true;
        
        return false;
    }
}
