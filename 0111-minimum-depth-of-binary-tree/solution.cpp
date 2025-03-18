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
    int minDepth(TreeNode* root) {
        if(root==nullptr) return 0;
        int minD = INT_MAX;
        depth(root, minD, 0);
        return minD;
    }

    void depth(TreeNode* root, int& minD, int curr){
        if(root==nullptr) return;
        curr++;
        if(root->left == nullptr && root->right == nullptr) minD = min(minD, curr);
        depth(root->left, minD, curr);
        depth(root->right, minD, curr);
        curr--; 
    }
};
