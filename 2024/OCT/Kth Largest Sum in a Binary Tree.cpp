long long kthLargestLevelSum(TreeNode* root, int k) {

        if(root==NULL)
        return -1;
        queue<TreeNode *>q;
        priority_queue<long long int>pq;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            long long int temp_sum=0;
            for(int i=0;i<n;i++)
            {
                TreeNode * node=q.front();
                temp_sum+=node->val;
                q.pop();
                if(node->right)
                q.push(node->right);
                if(node->left)
                q.push(node->left);
            }
            pq.push(temp_sum);
        }
        if(k>pq.size())
        return -1;

        while(k!=1){
        pq.pop();
        k--;
        }
        return pq.top();
        
    }