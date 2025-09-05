
/*

  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
  public:
    // Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node* head) {
        Node* temp=head;
        vector<int>ans;
        while(temp!=NULL){
            ans.push_back(temp->data);
            temp=temp->next;
        }
        sort(ans.begin(),ans.end());
        temp=head;
        for(int i=0;i<ans.size();i++){
            temp->data=ans[i];
            temp=temp->next;
        }
        return head;

        // Add code here
    }
};


