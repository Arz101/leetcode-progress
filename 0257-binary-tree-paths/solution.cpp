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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> leafs;
        Paths(root, "", leafs);
        return leafs;
    }

    void Paths(TreeNode* root, string s, vector<string>& leafs){
        if(!root) return;
        
        s += to_string(root->val);
        if(!root->left && !root->right){
            leafs.push_back(s);
            return;
        }

        s += "->";
        Paths(root->left, s, leafs);
        Paths(root->right,s, leafs);
    }
};
