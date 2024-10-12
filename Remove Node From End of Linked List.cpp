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
        if(head==NULL){
            return head;
        }else if(head->next==NULL){
            head=NULL;
            free(head);
            return head;
        }else{
            ListNode* prev=head, *current=head->next; 
            int sz=0;
            while(prev!=NULL){
                prev=prev->next;
                ++sz;
            }prev=head;
            int i=0, idx=sz-n-1; if(sz==n){
                head=prev->next;
                free(prev);
                return head;
            }
            while(idx--){
                prev=prev->next;
                current=current->next;
            }prev->next=current->next;
            free(current);
        }return head;
    }
};
