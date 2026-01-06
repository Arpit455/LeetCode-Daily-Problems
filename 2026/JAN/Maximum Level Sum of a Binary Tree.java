/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public int maxLevelSum(TreeNode root) {
     
     int minLevel=1 , maxiSum=root.val;

     Queue<TreeNode> q= new ArrayDeque<>();
     q.add(root);

     int level=1;

     while(!q.isEmpty())
     {
        int n =q.size() , totalSum=0;
        for(int i=0;i<n;i++)
        {
            TreeNode temp = q.peek();
            totalSum+=temp.val;
            if(temp.left!=null)
            q.add(temp.left);
            if(temp.right!=null)
            q.add(temp.right);
            q.poll();
        }
        if(totalSum>maxiSum)
        {
            maxiSum=totalSum;
            minLevel=level;
        }
        level++;
     }

     return minLevel;
        
 
    }
}