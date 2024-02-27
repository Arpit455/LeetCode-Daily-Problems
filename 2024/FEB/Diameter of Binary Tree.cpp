int maxDepth(TreeNode*root,int &diameter)
    {
        if(root==NULL)
        return 0;
        int lh=maxDepth(root->left,diameter);
        int rh=maxDepth(root->right,diameter);

        diameter=max(diameter,lh+rh);

        return 1+max(lh,rh);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {

        int diameter=0;
        maxDepth(root,diameter);
        return diameter;
        
    }