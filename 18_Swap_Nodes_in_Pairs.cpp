#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define endl '\n'

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* p=head;
        ListNode* k=new ListNode(0);
        ListNode* prev=k;
        prev->next=head;
        while(p!=NULL && p->next!=NULL){
            ListNode* q=p->next;
            prev->next=q;
            p->next=q->next;
            q->next=p;
            prev=p;
            p=p->next; 
        }
        return k->next;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    return 0;
}