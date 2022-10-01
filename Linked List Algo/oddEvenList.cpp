class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (!head) return nullptr;
        ListNode *odd = head, *even = head->next;
        ListNode *evenHead = even;       //strating position of even index sequence
        
        
        // try to dry running it with sample tc, you will get it 
        while (odd->next && even->next) {
            odd->next = even->next;
            odd = odd->next;
            even->next = odd->next;
            even = even->next;
        }
        
        //now odd is end of odd sequence
        // so we join this end of odd sequence to our beginning of even sequence
        
        odd->next = evenHead;
        return head;
    }
};
