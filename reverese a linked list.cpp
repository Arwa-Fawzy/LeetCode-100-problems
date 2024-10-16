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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }else{
            ListNode* current=head->next, *prev=head;
            prev->next=NULL;
            head=current;
            while(head!=NULL){
                head=head->next;
                current->next=prev;
                prev=current;
                current=head;
            }
            return prev;
        }
    }
};
