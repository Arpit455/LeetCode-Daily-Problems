int dp[51];
    int dfs(int i, string s,unordered_set<string>&st)
    {
        if(i==s.length())
        return 0;
        if(dp[i]!=-1)
        return dp[i];
 

        int ans;
        ans=1+dfs(i+1,s,st);
        string temp="";
        for(int j=i;j<s.length();j++)
        {
            temp+=s[j];
            if(st.count(temp)!=0)
            {
                ans=min(ans,dfs(j+1,s,st));
            }
        }
        return dp[i] = ans;
    }
    int minExtraChar(string s, vector<string>& dictionary) {

        unordered_set<string>st;
        memset(dp,-1,sizeof(dp));
        for(auto i:dictionary)
        {
            st.insert(i);
        }
        return dfs(0,s,st);
        
    }