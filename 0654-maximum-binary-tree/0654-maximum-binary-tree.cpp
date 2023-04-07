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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if(nums.size() == 0) return NULL;
        int n = max_element(nums.begin() , nums.end()) - nums.begin();
        TreeNode* root = new TreeNode(nums[n]);
        vector<int> v1 , v2;
        for(int i=0 ; i<n ; i++){
            v1.push_back(nums[i]);
        }
        
        for(int i=n+1 ; i<nums.size() ; i++){
            v2.push_back(nums[i]);
        }
        TreeNode* left = constructMaximumBinaryTree(v1);
        TreeNode* right = constructMaximumBinaryTree(v2);
        root -> left = left;
        root -> right = right;
        return root;
    }
};