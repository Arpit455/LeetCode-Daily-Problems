vector<int> largestValues(TreeNode* root) {

        vector<int> ans;
        if(root==NULL)
        return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int row_size=q.size();
            int temp_max=INT_MIN;
            for(int i=0;i<row_size;i++)
            {
                auto top=q.front();
                q.pop();
                temp_max=max(temp_max,top->val);
                if(top->left)
                q.push(top->left);
                if(top->right)
                q.push(top->right);
            }
            ans.push_back(temp_max);
        }
        return ans;
        
    }