/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int counter(ListNode* head){
        int cnt=0;
        while(head!=nullptr){
            cnt++;
            head=head->next;
        }
        return cnt;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        int cnt1=counter(headA);
        int cnt2=counter(headB);
        if(cnt1>cnt2){
            int diff=cnt1-cnt2;
            while(diff--){
                headA=headA->next;
            }
        }
        else{
            int diff=cnt2-cnt1;
            while(diff--){
                headB=headB->next;
            }
        }
        while(headA!=nullptr && headB!=nullptr){
            if(headA==headB) return headA;
            headA=headA->next;
            headB=headB->next;
        }
        return nullptr;
    }
};