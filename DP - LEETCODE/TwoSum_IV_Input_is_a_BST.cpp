class TreeNode {
    public:
        int val;
        TreeNode left;
        TreeNode right;
        TreeNode()
        {
            
        }
        TreeNode(int val) 
        {
            this.val = val;
        }
        TreeNode(int val, TreeNode left, TreeNode right)
        {
            this.val = val;
            this.left = left;
            this.right = right;
        }
}
 
class Solution {
    Set<Integer> hashset = new HashSet<>();
     public boolean findTarget(TreeNode root, int k) {
        if (root == null) {
            return false;
        }
        if (hashset.contains(k - root.val)) {
            return true;
        }
        hashset.add(root.val);
        return findTarget(root.left, k) || findTarget(root.right, k);
    }
}
