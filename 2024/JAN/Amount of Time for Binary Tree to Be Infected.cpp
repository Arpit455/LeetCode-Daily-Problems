 int amountOfTime(TreeNode* root, int start) {
        unordered_map<TreeNode*,TreeNode*>parent;
        queue<TreeNode*>q;
        TreeNode* startnode;

        if(root==NULL)
        return 0;
        q.push(root);
        while(!q.empty())
        {
            auto it=q.front();
            q.pop();
            if(it->val==start)
            {
                startnode=it;
            }

            if(it->left!=NULL)
            {
                parent[it->left]=it;
                q.push(it->left);
            }
            if(it->right!=NULL)
            {
                parent[it->right]=it;
                q.push(it->right);
            }

        }
        unordered_map<TreeNode*,int>visited;

       queue<pair<TreeNode*,int>> q1;
        q1.push({startnode,0});
        visited[startnode]=1;
        int count;
        while(!q1.empty())
        {
            auto it=q1.front();
            q1.pop();
            count=it.second;
            if(it.first->left!=NULL && visited.find(it.first->left)==visited.end())
            {
                q1.push({it.first->left,it.second+1});
                visited[it.first->left]=1;
            }
            if(it.first->right!=NULL && visited.find(it.first->right)==visited.end())
            {
                q1.push({it.first->right,it.second+1});
                visited[it.first->right]=1;
            }
            if(parent[it.first] &&visited.find(parent[it.first])==visited.end())
            {
                q1.push({parent[it.first],it.second+1});
                visited[parent[it.first]]=1;
            }



        }
        return count;


        
    }