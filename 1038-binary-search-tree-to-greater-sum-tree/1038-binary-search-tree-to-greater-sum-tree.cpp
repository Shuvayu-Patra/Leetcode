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
    void change(TreeNode* &root , map<int,int>m){
        if(root == NULL) return;
        root -> val = m[root -> val];
        change(root -> left , m);
        change(root -> right , m);
    }
    
    void inorder(TreeNode* root , vector<int>&v){
        if(root == NULL) return;
        inorder(root -> left,v);
        v.push_back(root -> val);
        inorder(root -> right,v);
    }
    
public:
    TreeNode* bstToGst(TreeNode* root) {
        vector<int>v;
        map<int,int>m;
        inorder(root,v);
        for(int i=0 ; i<v.size() ; i++){
            m[v[i]] = accumulate(v.begin()+i , v.end() , 0);
        }
        change(root , m);
        return root;
    }
};