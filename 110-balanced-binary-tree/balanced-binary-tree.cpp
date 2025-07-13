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

int heightCal(TreeNode* root){
    if(!root) return 0;

    return (1+max(heightCal(root->left),heightCal(root->right)));
}
    bool isBalanced(TreeNode* root) {
        if((!root) || (root->left==nullptr) &&(root->right==nullptr)) return true;

        int lh=heightCal(root->left);
        int rh=heightCal(root->right);
        if (abs(lh - rh) > 1) return false;
         
       return (isBalanced(root->left) && isBalanced(root->right));
        
    }
};