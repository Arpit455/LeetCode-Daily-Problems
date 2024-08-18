int nthUglyNumber(int n) {

        set<long long>s;
        s.insert(1);
        int count=1;
        while(count!=n)
        {
            long long mini=*s.begin();
           s.insert(2*mini);
           s.insert(3*mini);
           s.insert(5*mini);
           s.erase(mini);
           count++;
        }
        return *s.begin();
        
    }