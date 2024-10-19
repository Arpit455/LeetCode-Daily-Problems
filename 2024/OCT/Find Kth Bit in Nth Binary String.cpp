string invert(string &s)
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            s[i]='0';
            else
            s[i]='1';
        }
        return s;
    }
    char findKthBit(int n, int k) {
        
        if(n==1)
        return '0';
        string prev="0";
        string ans;
        for(int i=2;i<=n;i++)
        {
            
            ans=prev+"1";
            invert(prev);
            reverse(prev.begin(),prev.end());
            ans+=prev;
            prev=ans;
        }
        return ans[k-1];
        
    }