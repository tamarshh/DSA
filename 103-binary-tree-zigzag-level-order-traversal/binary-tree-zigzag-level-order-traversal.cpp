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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        stack<TreeNode*>s1,s2;
         
       vector< vector<int> >res;
       if(!root) return res;
        s1.push(root);
      

         while((!s1.empty() )|| (!s2.empty())){
            vector<int> ans;
            if(!s1.empty()){
                while(!s1.empty()){
                    TreeNode*temp=s1.top();
                    ans.push_back(temp->val);
                    s1.pop();
                    if(temp->left) s2.push(temp->left);
                    if(temp->right) s2.push(temp->right);
                     
                }
                res.push_back(ans);
            }
            else{
                vector<int> ans;
                while(!s2.empty()){
                    TreeNode*temp=s2.top();
                    ans.push_back(temp->val);
                    s2.pop();
                  
                    if(temp->right) s1.push(temp->right);
                    if(temp->left) s1.push(temp->left);
                }
                  res.push_back(ans);
            }
            
        }
        return res;
        

    }
};