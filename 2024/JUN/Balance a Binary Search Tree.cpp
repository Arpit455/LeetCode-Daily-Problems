private:
    void inorder(TreeNode* root,vector<int>&v)
    {
        if(!root) return ;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
        return ;
    }
    TreeNode * tree(int low ,int high,vector<int>&v)
    {
       int mid=(low+high)/2;
       TreeNode *temp=new TreeNode(v[mid]);
       if(low<mid)
       temp->left=tree(low,mid-1,v);
       if(high>mid)
       temp->right=tree(mid+1,high,v);
       return temp;
    }
public:
    TreeNode* balanceBST(TreeNode* root) {

        vector<int>nodes;
        inorder(root,nodes);
        return tree(0,nodes.size()-1,nodes);

        
    }