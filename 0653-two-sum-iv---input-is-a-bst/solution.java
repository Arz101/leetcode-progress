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
    List<Integer> num = new ArrayList<>();
    public boolean findTarget(TreeNode root, int k) {
        if(root.left == null && root.right == null && root.val != k) return false;
        find(root);

        Iterator<Integer> iterator = num.iterator();
        while (iterator.hasNext()) {
            int current = k - iterator.next();
            iterator.remove();
            if(num.contains(current)) return true;
        }
        return false;
    }

    private void find(TreeNode root){
        if(root == null) return;
        num.add(root.val);
        find(root.left);
        find(root.right);
        return;
    }

}
