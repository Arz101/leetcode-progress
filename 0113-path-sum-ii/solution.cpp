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
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> branches;
        vector<int> nodes;
        search(root, targetSum, nodes, branches);
        return branches;
    }

    void search(TreeNode* root, int K, vector<int>& nodes, vector<vector<int>>& branches){
        if(!root) return;

        K -= root->val;
        nodes.push_back(root->val);
        
        if(K == 0 && (!root->left && !root->right)){
            branches.push_back(nodes);
        }
        else{
            search(root->left, K, nodes, branches);
            search(root->right, K, nodes, branches);
        }
        nodes.pop_back();
    }
};
