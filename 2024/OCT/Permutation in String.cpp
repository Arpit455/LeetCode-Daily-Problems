bool checkInclusion(string s1, string s2) {
        int n1=s1.length(),n2=s2.length();
        unordered_map<char,int>m1,m2;
        for(auto i:s1)
        m1[i]++;

        int i=0,j=0;
        while(j<n2)
        {
            m2[s2[j]]++;
            if(j-i+1>n1)
            {
                m2[s2[i]]--;
                if(m2[s2[i]]==0)
                m2.erase(s2[i]);
                i++;
            }
            if(j-i+1==n1)
            {
                if(m1==m2)
                return true;
            }
            j++;
        }
        return false;
        
    }