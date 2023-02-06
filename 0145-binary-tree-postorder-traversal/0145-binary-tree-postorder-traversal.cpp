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
    vector<int>x;
    
    vector<int> postorderTraversal(TreeNode* root) {
        if(root){
            postorderTraversal(root->left);  //left subtree
        postorderTraversal(root->right); //right subtree
        x.push_back(root->val);      //pushing value of root to ans
            
        }
        return x;
    }
};