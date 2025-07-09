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
     
    // void preorder(TreeNode*root,vector<int>&v){
    //     if(root!=nullptr) {
    //          v.push_back(root->val);
    //          preorder(root->left,v);
    //          preorder(root->right,v);

    //     }else{
    //         v.push_back(100000);
    //     }

       
    // }
    bool isSameTree(TreeNode* p, TreeNode* q) {

        // vector<int>inp;
        // vector<int>inq;
        // preorder(p,inp);
        // preorder(q,inq);

        // if(inp==inq) return true;
        // return false;

        // approach 2
           if(!p and !q) return true;
        if((!p or !q)) return false;
        if(p->val != q->val) return false;
        return isSameTree(p->left,q->left) and isSameTree(p->right,q->right);

        
    }
};