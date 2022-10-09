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
    int helper(TreeNode* root, int &maxi)
    {
        if(!root)return 0 ;
        int l=max(helper(root->left,maxi),0);
        int r=max(helper(root->right,maxi),0);
       
        maxi=max(root->val+l+r,maxi);
        return root->val+max(l,r);
        
    }
  
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        int p=helper(root,maxi);

        return maxi;
    }
};