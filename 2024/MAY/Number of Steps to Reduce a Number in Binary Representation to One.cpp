int numSteps(string s) {

        int ans=0,i=s.size()-1;
        while(s.size()>1)
        {
            cout<<s[s.size()-1]<<" ";
            if(s[s.size()-1]=='0')
            {
                s.pop_back();
    
            }
            else
            {
                int j=s.size()-1;
                while(j>=0 && s[j]!='0')
                {
                    s[j]='0';
                    j--;

                }
                if(j<0)
                s.insert(0,"1");
                else
                s[j]='1';

            }
        ans++;
        }
        return ans;
        
    }