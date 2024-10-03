int minSubarray(vector<int>& nums, int p) {
        int totalsum=0;
        for(auto i:nums)
        totalsum=(totalsum+i)%p;
        if(totalsum%p==0)
        return 0;

        int sum=0,subarraylength=nums.size(),remainder=totalsum%p;
        unordered_map<int,int>m;
        m[0]=-1;
        for(int i=0 ;i<nums.size();i++)
        {
            sum=(sum+nums[i])%p;
            int prevfind=((sum-remainder)%p+p)%p;
            if(m.find(prevfind)!=m.end())
            subarraylength=min(subarraylength,i-m[prevfind]);

            m[sum]=i;

        }

        return subarraylength==nums.size() ?-1 : subarraylength;
        
    }