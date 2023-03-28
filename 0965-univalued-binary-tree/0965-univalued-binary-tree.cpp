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
    void inorder(TreeNode* root , vector<int>&v){
        if(root == NULL) return;
        inorder(root -> left,v);
        v.push_back(root -> val);
        inorder(root -> right,v);
    }
public:
    bool isUnivalTree(TreeNode* root) {
        vector<int>v;
        inorder(root,v);
        int val = v[0];
        for(auto it : v){
            if(val != it) return false;
        }
        return true;
    }
};