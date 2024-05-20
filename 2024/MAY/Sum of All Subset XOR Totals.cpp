int subsetXORSum(vector<int>& nums) {

        int ans=0;
        int n=nums.size();
        for(int i=0;i<(1<<n);i++)
        {
            int temp=0;
            for(int j=0;j<n;j++)
            {
                if(i&(1<<j))
                temp^=nums[j];
            }
            ans+=temp;
        }
        return ans;
        
    }