bool judgeSquareSum(int c) {
        
        unordered_set<int>s;
        for(int i=0;i<=sqrt(c);i++)
        {
            s.insert(i*i);
        }
        for(auto i:s)
        {
            if(s.find(c-i)!=s.end())
            return true;
        }
        return false;
        
    }