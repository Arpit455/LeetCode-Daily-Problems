public:
vector<int>ans;
    vector<int> postorder(Node* root) {
        if(!root)
        return ans;

        for(int i=0;i<root->children.size();i++)
        {
            postorder(root->children[i]);
        }
        ans.push_back(root->val);
        return ans;
        
    }