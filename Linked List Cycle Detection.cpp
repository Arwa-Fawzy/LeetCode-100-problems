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
    bool hasCycle(ListNode* head) {
        ListNode* current=head; map<int,int>mp;
        while(current!=NULL){
            if(mp[current->val]){
                return true;
            }
            mp[current->val]+=1;
            current=current->next;
            
        }return false;
    }
};
