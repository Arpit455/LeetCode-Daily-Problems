bool canChange(string start, string target) {

        unordered_map<char,int>m1,m2;
        for(auto i:start)
        m1[i]++;
        for(auto i:target)
        m2[i]++;

        if(m1!=m2)
        return false;

        int i=0,j=0;
        while(i<start.size() && j<target.size())
        {
            while(start[i]=='_')
            i++;
            while(target[j]=='_')
            j++;
            if(start[i]!=target[j])
            return false;
            if(start[i]=='L' && j>i)
            return false;
            if(start[i]=='R' && i>j)
            return false;
            i++;
            j++;

        }
        return true;
        
    }