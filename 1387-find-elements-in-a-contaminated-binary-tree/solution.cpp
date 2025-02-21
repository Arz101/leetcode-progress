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
class FindElements {
    unordered_set<int> set;

    void change(TreeNode* root, int value){
        if(!root) return;

        set.insert(value);
        change(root->left, value * 2 + 1);
        change(root->right, value * 2 + 2);
    }

public:
    FindElements(TreeNode* root) {
        change(root, 0);
    }
    
    bool find(int target) {
        return (set.find(target) != set.end()) ? true : false;
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */
