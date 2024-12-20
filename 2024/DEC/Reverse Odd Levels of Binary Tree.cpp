TreeNode* reverseOddLevels(TreeNode* root) {

        queue<TreeNode*> nodes;
        nodes.push(root);
        int level=0;
        while(!nodes.empty())
        {
            int num_of_nodes=nodes.size();
            queue<TreeNode*>q;
            stack<int>s;
            for(int i=0;i<num_of_nodes;i++)
            {
                auto temp=nodes.front();
                if(level&1)
                {
                    q.push(temp);
                    s.push(temp->val);
                }
                if(temp->left)
                nodes.push(temp->left);
                if(temp->right)
                nodes.push(temp->right);
                nodes.pop();
            }
            if(s.size())
            {
                while(!q.empty())
                {
                    q.front()->val=s.top();
                    q.pop();
                    s.pop();
                }
            }
            level++;
        }
        return root;
        
    }