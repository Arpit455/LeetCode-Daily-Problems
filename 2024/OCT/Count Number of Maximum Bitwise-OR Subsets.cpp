int countMaxOrSubsets(vector<int>& nums) {
        
        int n=nums.size();
        int range=1<<(n);
        int maxiOr=0;
        for(auto i:nums)
        maxiOr=maxiOr|i;

        int ans=0;
        for(int i=1;i<range;i++)
        {
            int tempOr=0,pos=i;
             for(int j=0;j<n;j++)
             {
                if(pos&1)
                {
                    tempOr=tempOr | nums[n-j-1];
                    
                }
                pos=pos>>1;
             }
            if(tempOr==maxiOr)
            ans++;
        }
        return ans;
    }