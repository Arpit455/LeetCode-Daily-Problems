 int waysToSplitArray(vector<int>& nums) {
        int n=nums.size();
        long long totalSum=0;
        for(auto i:nums)
        totalSum+=i;

        int splits=0;
        long long sum=0;
        for(int i=0;i<n-1;i++)
        {
            sum+=nums[i];
            if(sum>=totalSum-sum){
                 splits++;
            }
           
        }
        return splits;
        
    }