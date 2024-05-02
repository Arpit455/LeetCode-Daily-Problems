int findMaxK(vector<int>& nums) {

        unordered_set<int>s;
        for(auto i:nums)
        {
            if(i<0)
            s.insert(i);
        }
        int maxi =0;
        for(auto i:nums)
        {
            if(i>0 && i>maxi)
            {
                if(s.find(-1*i)!=s.end())
                maxi=i;

            }
        };
        return  maxi==0?-1:maxi;
        
    }