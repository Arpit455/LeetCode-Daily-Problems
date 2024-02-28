int findBottomLeftValue(TreeNode* root) {

        if(root==NULL)
        return 0;
        queue<TreeNode*>q;
        int ans;
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            ans=q.front()->val;
            for(int i=0;i<size;i++)
            {
                TreeNode* top=q.front();
                q.pop();
                if(top->left)
                q.push(top->left);
                if(top->right)
                q.push(top->right);
            }
        }
        return ans;
        
    }+++++