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
int maxDia=0;

int calcHeight(TreeNode* root){
    if (root==nullptr) return 0;
    int lh,rh;
        lh=calcHeight(root->left);
        rh=calcHeight(root->right);
    maxDia=max(maxDia,1+lh+rh);
    return (1+max(lh,rh));

    // return (1+max(calcHeight(root->left), calcHeight(root->right)));
}
    int diameterOfBinaryTree(TreeNode* root) {

        calcHeight(root);
        
        return maxDia-1;

        
    }
};