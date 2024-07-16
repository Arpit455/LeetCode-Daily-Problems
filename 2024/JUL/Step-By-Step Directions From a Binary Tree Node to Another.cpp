/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

TreeNode *LCA(TreeNode * root,int s,int d)
    {
        if(root==NULL || root->val==s || root->val==d)
        return root;
        TreeNode *l=LCA(root->left,s,d);
        TreeNode *r=LCA(root->right,s,d);
        if(l==NULL)
        return r;
        else if(r==NULL)
        return l;
        else
        return root;
    }

    bool path(TreeNode *root,int d, string &curr)
    {
        if(root==NULL)
            return false;
        if( root->val==d) {
            return true;
        }
        curr.push_back('L');
        if(path(root->left,d,curr))
        return true;
        curr.pop_back();

        curr.push_back('R');
        if(path(root->right,d,curr))
        return true;
        curr.pop_back();
        return false;
    }
    string getDirections(TreeNode* root, int startValue, int destValue) {

        TreeNode*lca=LCA(root,startValue,destValue);
        string ans="";
        path(lca,startValue, ans);
        for(int i=0;i<ans.size();i++)
        ans[i]='U';
        string temp1 = "";
        path(lca,destValue,temp1);
        ans+=temp1;
        return ans;
        
    }
