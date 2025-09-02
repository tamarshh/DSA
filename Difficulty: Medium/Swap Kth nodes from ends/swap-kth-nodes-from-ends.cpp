

class Solution {
  public:
    Node* swapKth(Node* head, int k) {
       
       int size=0;
       Node*temp=head;
       while(temp){
           temp=temp->next;
           size++;
       }
       
       
       Node* node1=nullptr;
       Node* node2=nullptr;
       int start=k-1;
       int end=size-k;
       int cnt=0;
       temp=head;
       while(temp){
           if(cnt==start) node1=temp;
           if(cnt==end) node2=temp;
           cnt++;
           temp=temp->next;
       }
       
       if(node1 && node2 ){
           swap(node1->data,node2->data);
       }
       return head;
       
        
    }
};