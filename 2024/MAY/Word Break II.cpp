vector<string> helper(int prev,int curr,string s,string temp,unordered_set<string>&m,vector<string>&ans)
    {
        if(curr>=s.size())
        {
            if(prev==curr)
            ans.push_back(temp);
            return ans;

        }
        helper(prev,curr+1,s,temp,m,ans);
        string t="";
        for(int i=prev;i<=curr;i++)
        t+=s[i];
        if(m.find(t)!=m.end())
        {
            if(temp=="")
            helper(curr+1,curr+1,s,t,m,ans);
            else
            helper(curr+1,curr+1,s,temp+" " +t,m,ans);
        }
        
        return ans;
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        
        unordered_set<string>m;
        for(auto i:wordDict)
        m.insert(i);
        vector<string>ans;
        return helper(0,0,s,"",m,ans);
    }