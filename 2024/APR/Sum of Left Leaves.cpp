int sumOfLeftLeaves(TreeNode* root) {
     
     if(root==NULL)
     return 0;
     if(root->left)
     {
        if(!root->left->left && !root->left->right)
        return root->left->val+sumOfLeftLeaves(root->right);
        else
        return sumOfLeftLeaves(root->right)+sumOfLeftLeaves(root->left);
     }
     else
     return sumOfLeftLeaves(root->right);
        
    }