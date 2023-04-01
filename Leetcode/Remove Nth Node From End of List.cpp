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

        ListNode *slow=head, *fast=head;
        for(int i=0;i<n;i++) {
            fast = fast->next;
        }
        if(fast) {
            while(fast->next) {
                slow = slow->next;
                fast = fast->next;
            }
            ListNode *temp = slow->next;
            slow->next = temp->next;
        }
        else {
            ListNode *temp = head;
            head = head->next;
            
        }
        return head;
    }
};
