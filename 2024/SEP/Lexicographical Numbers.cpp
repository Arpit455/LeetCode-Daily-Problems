void dfs(int a, int n,vector<int>&ans)
    {
        if(a>n)
        return;

        ans.push_back(a);

        for(int i=0;i<=9;i++)
        dfs(a*10+i,n,ans);
        return ;
    }
    vector<int> lexicalOrder(int n) {
        vector<int>ans;
        for(int i=1;i<=9;i++)
        dfs(i,n,ans);
        return ans;
    }