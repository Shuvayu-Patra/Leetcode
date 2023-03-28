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
private:
    bool isIdentical(TreeNode* root , TreeNode* subRoot){
         if(root == NULL and subRoot == NULL) return true;
         else if(root == NULL or subRoot == NULL or root -> val != subRoot -> val) return false;
         if(!isIdentical(root -> left , subRoot -> left)) return false;
         if(!isIdentical(root -> right , subRoot -> right)) return false;
        return true;   
    }
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root == NULL) return false;
        if(isIdentical(root,subRoot)) return true;
        return isSubtree(root -> left,subRoot) or isSubtree(root -> right,subRoot);
    }
};