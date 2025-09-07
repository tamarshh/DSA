/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* mergeKLists(vector<Node*>& arr) {
        // code here
        vector<int>ans;
        
        for(int i=0;i<arr.size();i++){
            Node*temp=arr[i];
            
            while(temp!=nullptr){
                ans.push_back(temp->data);
                temp=temp->next;
            }
        }
        sort(ans.begin(),ans.end());
        
        
        Node* head = new Node(ans[0]);
        Node* current = head;
        
        for (int i = 1; i < ans.size(); i++) {
        current->next = new Node(ans[i]);
        current = current->next;
        }
        return head;
        
                    
        
        
        
    }
};