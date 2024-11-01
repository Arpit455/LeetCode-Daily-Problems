string makeFancyString(string s) {
        string ans="";
        ans+=s[0];
        int i=1,prev=0;
        bool doublechar=false;
        while(i<s.length())
        {
            if(s[i]!=ans[prev])
            {
                ans+=s[i];
                doublechar=false;
                prev++;
            }
            else if( s[i]==ans[prev] && !doublechar)
            {
                prev++;
                ans+=s[i];
                doublechar=true;
            }
            i++;
        }
        return ans;
        
    }