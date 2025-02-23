class Solution {
public:
    TreeNode *solve(int preStart,int preEnd,int postStart,vector<int>& preorder, vector<int>& postorder)
    {
        if(preStart>preEnd)
        return NULL;

        TreeNode*root=new TreeNode(preorder[preStart]);
        if(preStart==preEnd)
        return root;
        int nextRoot=preorder[preStart+1];
        int j=postStart;
        while(postorder[j]!=nextRoot)
        j++;

        root->left=solve(preStart+1,preStart+j-postStart+1,postStart,preorder,postorder);
        root->right=solve(preStart+j-postStart+2,preEnd,j+1,preorder,postorder);

        return root;
    }
    TreeNode* constructFromPrePost(vector<int>& preorder, vector<int>& postorder) {


        return solve(0,preorder.size()-1,0,preorder,postorder);
        
    }
};