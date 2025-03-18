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
    int maxDepth(TreeNode* root) {
        int maxD=0;
        depth(root, maxD, 0);
        return maxD;
    }

    void depth(TreeNode* root, int& maxD, int curr){
        if(root==nullptr) return;
        
        curr++;
        if(root->left == nullptr && root->right == nullptr) maxD = max(maxD, curr);

        depth(root->left, maxD, curr);
        depth(root->right, maxD, curr);
        curr--;
    }
};
