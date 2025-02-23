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
    TreeNode* recoverFromPreorder(string s) {
        int index = 0;
        stack<TreeNode*> stack;

        while(index < s.length()){
            int depth = 0;

            while(index < s.length() && s[index] == '-'){
                depth++;
                index++;
            }

            int value = 0;
            while(index < s.length() && isdigit(s[index])){
                value = value * 10 + s[index] - '0';
                index++;
            }

            while(stack.size() > depth) stack.pop();

            TreeNode* root = new TreeNode(value);

            if(!stack.empty()){
                if(stack.top()->left == nullptr) stack.top()->left = root;
                else stack.top()->right = root;
            }

            stack.push(root);
        }

        while(stack.size() > 1) stack.pop();

        return stack.top();
    }
};
