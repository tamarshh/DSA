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
    vector<vector<int>> levelOrder(TreeNode* root) {

        vector<vector<int>> ans;
        queue<TreeNode*> q;

        if(root==nullptr) return ans;

        q.push(root);

        while(!q.empty()){
            vector<int>data;
            int size=q.size();
            if(size==0) return ans;

            while(size>0){

                TreeNode*temp=q.front();
                q.pop();

                data.push_back(temp->val);

                if(temp->left!=nullptr) q.push(temp->left);
                if(temp->right!=nullptr) q.push(temp->right);
                size--;
            }
             ans.push_back(data);
            
        }
       return ans;
        


    }
};