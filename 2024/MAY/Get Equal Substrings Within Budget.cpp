int equalSubstring(string s, string t, int maxCost) {

        int ans=0;
        int temp_ans=0;
        int i=0,j=0;
        while(j<s.size())
        {
            if(abs(s[j]-t[j])<=maxCost)
            {
                temp_ans++;
                maxCost-=abs(s[j]-t[j]);
                j++;
            }
            else if(abs(s[j]-t[j])>maxCost && i==j)
            {
                i++;
                j++;
            }
            else
            {
                maxCost+=abs(s[i]-t[i]);
                i++;
                temp_ans--;
            }
            ans=max(ans,temp_ans);
        }
        return ans;
        
    }