int sortArray(vector<int>&v)
    {
        map<int,int>m;
        for(int i=0;i<v.size();i++)
        m[v[i]]=i;

        int swapCount=0,j=0;
        for(auto i:m)
        {
            if(v[j]!=i.first)
            {
                swapCount++;
                m[v[j]]=i.second;
                swap(v[j],v[i.second]);
            }
            j++;
        }
        return swapCount;
    }
    int minimumOperations(TreeNode* root) {

        queue<TreeNode*>q;
        q.push(root);

        int num_of_swaps=0;
        while(!q.empty())
        {
          int n=q.size();
          vector<int>v;
          for(int i=0;i<n;i++)
          {
             auto temp=q.front();
             q.pop();
             v.push_back(temp->val);
             if(temp->left)
             q.push(temp->left);
             if(temp->right)
             q.push(temp->right);
          }
          num_of_swaps+=sortArray(v);
          cout<<num_of_swaps<<" ";
        }
        return num_of_swaps;
        
    }