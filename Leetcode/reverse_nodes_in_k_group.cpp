//it is a leetcode hard level problem and this my efficient solution for this problem.
//hope u'll like it


class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head||!head->next)return head;
        ListNode* temp = head;
        for(int i = 0; i < k; i++){
            if(!temp) return head;
            temp = temp->next;
        }
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* nex = NULL;
        for(int i = 0; i < k; i++){
            nex = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nex;
        }
        head->next = reverseKGroup(curr, k);
        return prev;
    }
};
