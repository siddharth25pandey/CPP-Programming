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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
  bool isSubPath(ListNode* head, TreeNode* root) {
       if(root==nullptr) return false;//if we reached the end of the tree
        if(match(head,root)) return true;//if we find a path to match the pattern
        return isSubPath(head,root->left)||isSubPath(head,root->right);//Search for the pattern in left subtree and right subtree
    }
    bool match(ListNode* head, TreeNode* root)
    {
        if(!head) return true;//if the head is null then we found a path
        if(!root||root->val!=head->val) return false;//we didn't find a match starting from this node
        return match(head->next,root->left)||match(head->next,root->right);//Continue matching from this node downwards
    }

};
