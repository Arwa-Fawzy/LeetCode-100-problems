class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(); 
        ListNode* l3 = dummy;
        int r = 0;
        while (l1 != NULL || l2 != NULL || r > 0) {
            int sum = r;
            if (l1 != NULL) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2 != NULL) {
                sum += l2->val;
                l2 = l2->next;
            }
            r = sum / 10;  
            l3->next = new ListNode(sum % 10);  
            l3 = l3->next;
        }

        return dummy->next;  
    }
};
