/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    stack<int> pila;
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL) return false;
        
        int n = targetSum - root->val;
        pila.push(n);

        if(!pila.empty() && root->right == NULL && root->left == NULL && n == 0) return true;

        if(hasPathSum(root->left, n)) return true;

        if(hasPathSum(root->right, n)) return true;

        return false;
    }
};
