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
    bool solve(TreeNode* leftsubtree , TreeNode* rightsubtree){
        
        if(leftsubtree == NULL && rightsubtree == NULL) return true;
        if(leftsubtree == NULL && rightsubtree != NULL) return false;
        if(leftsubtree != NULL && rightsubtree == NULL) return false;
        if(leftsubtree -> val != rightsubtree -> val) return false;
        
        return solve(leftsubtree -> left , rightsubtree -> right) &&
            solve(leftsubtree -> right , rightsubtree -> left);
    }
public:
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;
        
        return solve(root -> left , root -> right);
    }
};