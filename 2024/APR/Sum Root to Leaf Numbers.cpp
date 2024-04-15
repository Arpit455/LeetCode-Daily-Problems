 int Num(int prev, TreeNode* root) {
        if (root == NULL)
            return 0;
        prev = 10 * prev + root->val;
        if (root->left == NULL && root->right == NULL) {
            return prev;
        } else {
            return Num(prev, root->left) + Num(prev, root->right);
        }
    }
    int sumNumbers(TreeNode* root) { return Num(0, root); }