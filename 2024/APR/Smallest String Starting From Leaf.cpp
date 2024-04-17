    void helper(TreeNode* root ,string s,string &ans)
    {
        if(!root)
        return ;
        s=char(root->val+'a')+s;
        if(!root->left && !root->right)
        {
            if(ans=="" || ans>s)
            {
                ans=s;
               
            }
             return;
        }
        helper(root->left,s,ans);
        helper(root->right,s,ans);
    }
    string smallestFromLeaf(TreeNode* root) {
    string ans="";
    helper(root,"",ans);
    return ans;
        
    }