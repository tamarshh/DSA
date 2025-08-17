/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int cnt=0;
        while(temp!=NULL){
            temp=temp->next;
            cnt++;

        }
        if(cnt==n){
            return head->next;
        }
         cnt=cnt-n;

        temp=head;
        for(int i=1;i<cnt;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;

        
    }
};