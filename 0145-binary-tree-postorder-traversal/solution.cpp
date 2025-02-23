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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>n;
        dfs(root,n);
        return n;
    }
    void dfs(TreeNode* root, vector<int>& n){
        if(!root) return;

        dfs(root->left, n);
        dfs(root->right, n);

        n.push_back(root->val);
    }
};
