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
    bool isSymmetric(TreeNode* root) {
        if(!root) return false;
        return sides(root->left, root->right);
    }

    bool sides(TreeNode* p, TreeNode* q){
        if(p == nullptr && q == nullptr) 
            return true;
            
        else if((p == nullptr && q != nullptr) || (p != nullptr && q == nullptr))
            return false;
        
        if(p->val != q->val)
            return false;
        
        return sides(p->left, q->right) && sides(p->right, q->left);
    }
};
