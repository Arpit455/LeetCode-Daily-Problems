int findJudge(int n, vector<vector<int>>& trust) {
        //int n=trust.size();
        vector<int> v1(n+1),v2(n+1);
        for(int i=0;i<trust.size();i++)
        {
            v1[trust[i][0]]++;
            v2[trust[i][1]]++;
        }
        for(int i=1;i<=n;i++)
        {
            if(v1[i]==0 && v2[i]==n-1)
            return i;
        }
        return -1;

    }