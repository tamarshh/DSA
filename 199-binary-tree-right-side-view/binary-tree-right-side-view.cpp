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

//Approach 2 using Recursion

 void Lview(TreeNode *root,int level,vector<int>&ans){
             if(!root) return ;
             
             if(level==ans.size()){
                 ans.push_back(root->val);
             }
           
             Lview(root->right,level+1,ans);
               Lview(root->left,level+1,ans);
                
            }
        
    vector<int> rightSideView(TreeNode* root) {
    //     vector<int> ans;
    //     queue<TreeNode*> q;

    //     if(root==nullptr) return ans;

    //     q.push(root);

    //     while(!q.empty()){
    //         int data=0;
    //         int size=q.size();
    //         if(size==0) return ans;

    //         while(size>0){

    //             TreeNode*temp=q.front();
    //             q.pop();

    //             // data.push_back(temp->val);
    //             data=temp->val;

    //             if(temp->left!=nullptr) q.push(temp->left);
    //             if(temp->right!=nullptr) q.push(temp->right);
    //             size--;
    //         }
    //          ans.push_back(data);
            
    //     }
    //    return ans;
     vector<int>ans;
            Lview(root,0,ans);
            return ans;
           

        


        
    }
};