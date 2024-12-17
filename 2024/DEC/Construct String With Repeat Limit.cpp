string repeatLimitedString(string s, int repeatLimit) {

        map<char,int>m;
        for(auto i:s)
        m[i]++;

        string ans="";
        while(!m.empty())
        {
            if(ans=="" || ans.back()!=m.rbegin()->first)
            {
                int mini=min(repeatLimit,m.rbegin()->second);
                for(int i=0;i<mini;i++)
                {
                    ans+=m.rbegin()->first;
                    m.rbegin()->second--;

                }
                if(m.rbegin()->second==0)
                m.erase(m.rbegin()->first);
            }
            else
            {
               if(m.size()==1)
               break;
               char temp=m.rbegin()->first;
               int num=m.rbegin()->second;
               m.erase(m.rbegin()->first);

               ans+=m.rbegin()->first;
               m.rbegin()->second--;
               if(m.rbegin()->second==0)
               m.erase(m.rbegin()->first);
               m[temp]=num;


            }
        }
        return ans;
        
    }