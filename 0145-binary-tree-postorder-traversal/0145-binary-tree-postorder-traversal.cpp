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
    void postorderhelp(TreeNode* root, vector<int>& x){
        
        if(root == NULL){
            return;
        }
        postorderhelp(root->left, x);  //left subtree
        postorderhelp(root->right,x); //right subtree
        x.push_back(root->val);      //pushing value of root to ans
        
    }
    
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> x;
        postorderhelp(root, x);
        return x;
    }
};