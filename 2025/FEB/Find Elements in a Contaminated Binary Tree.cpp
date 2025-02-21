class FindElements {
public:
    unordered_set<int>s;
    FindElements(TreeNode* root) {
        queue<pair<TreeNode *,int>>q;
        q.push({root,0});
        s.insert(0);
        while(!q.empty())
        {
            TreeNode *node =q.front().first;
            int val=q.front().second;
            q.pop();
            if(node->left)
            {
                q.push({node->left,2*val+1});
                s.insert(2*val+1);
            }
            if(node->right)
            {
                 q.push({node->right,2*val+2});
                s.insert(2*val+2);
            }

        }


        
    }
    
    bool find(int target) {

        return s.count(target)!=0;
        
    }
};