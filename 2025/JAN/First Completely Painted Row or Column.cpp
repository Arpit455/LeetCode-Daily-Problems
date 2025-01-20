int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        vector<pair<int,int>>position(m*n+1);

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                position[mat[i][j]]={i,j};
            }
        }
        vector<int>row(m,n);
        vector<int>col(n,m);

        for(int i=0;i<arr.size();i++)
        {
            auto pos=position[arr[i]];
            int r=pos.first,c=pos.second;
            if(--row[r]==0 || --col[c]==0)
            return i;
        }
        return 0;
        
    }