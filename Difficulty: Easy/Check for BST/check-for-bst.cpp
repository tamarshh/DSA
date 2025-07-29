/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
      bool helper(Node* root, int minVal, int maxVal) {
        if (root == nullptr) return true;
        
        if (root->data <= minVal || root->data >= maxVal) return false;

        return helper(root->left, minVal, root->data) &&
               helper(root->right, root->data, maxVal);
    }
    
    bool isBST(Node* root) {
        // Your code here
       return helper(root, INT_MIN, INT_MAX);
    }
};