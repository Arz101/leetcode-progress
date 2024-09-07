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
    List<String> ans = new ArrayList<>();
    String tree = "";
    List<String> back = new ArrayList<>();
    
    public List<String> binaryTreePaths(TreeNode root) {
        if(root == null) return ans;

        if(root.left == null && root.right == null){
            tree += root.val;
            ans.add(tree);
        }    
        else tree += root.val + "->";
        back.add(tree);

        binaryTreePaths(root.left);
        binaryTreePaths(root.right);

        if(back.size()>0){
            back.remove(back.size()-1);
            if(!back.isEmpty())tree = back.get(back.size() - 1);
        }return ans;
    }
}
