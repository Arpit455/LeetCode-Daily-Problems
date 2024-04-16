    TreeNode* addOneRow(TreeNode* root, int val, int depth) {


        if(depth==1)
        {
            TreeNode *node1=new TreeNode(val);
            node1->left=root;
            return node1;
        }
        queue<TreeNode*> q;
        q.push(root);
        for(int i=1;i<depth-1;i++)
        {
            int n=q.size();
            for(int j=0;j<n;j++)
            {
                TreeNode * temp=q.front();
                q.pop();
                if(temp->left)
                q.push(temp->left);
                if(temp->right)
                q.push(temp->right);
            }
        }

        while(q.size())
        {
            TreeNode * temp=q.front();
            TreeNode * left=temp->left;
            TreeNode * right=temp->right;
            q.pop();
            
            TreeNode *node1=new TreeNode(val);
            TreeNode *node2=new TreeNode(val);
            temp->left=node1;
            node1->left=left;
            temp->right=node2;
            node2->right=right;


        }
        return root;
        
    }