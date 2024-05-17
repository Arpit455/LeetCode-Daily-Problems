TreeNode* removeLeafNodes(TreeNode* root, int target) {

        stack<pair<pair<TreeNode*, TreeNode*>,int>>s;
        queue<TreeNode*>q;
        TreeNode* temp=root;
        q.push(temp);
        while(!q.empty())
        {
            TreeNode* x=q.front();
            cout<<x->val<<" ";
            q.pop();
            if(x->left)
            {
                if(x->left->val==target)
                {
                s.push({{x->left,x},0});
                }
                q.push(x->left);
            }
            if(x->right)
            {
                if(x->right->val==target)
                {
                s.push({{x->right,x},1});
                }
                q.push(x->right);
            }
        }
        while(!s.empty())
        {
            if(!s.top().first.first->left && !s.top().first.first->right)
            {
                if(s.top().second==0)
                s.top().first.second->left=NULL;
                else
                s.top().first.second->right=NULL;

            }
            s.pop();
        }
        if(!root->left && !root->right && root->val==target)
        return NULL;
        else
        return root;
        
    }