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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (!root) return false; // Si el nodo es nulo, no hay camino.

        // Restamos el valor del nodo actual del targetSum
        targetSum -= root->val;
        
        // Si llegamos a una hoja y targetSum es 0, encontramos un camino válido.
        if (!root->left && !root->right) return targetSum == 0;
        
        // Recursión: Si cualquiera de los dos caminos devuelve true, retornamos true.
        return hasPathSum(root->left, targetSum) || hasPathSum(root->right, targetSum);
    }
};
