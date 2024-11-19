long long maximumSubarraySum(vector<int>& nums, int k) {

        int n=nums.size();
        vector<long long int>prefix_sum;
        prefix_sum.push_back(nums[0]);
        for(int i=1;i<n;i++)
        {
            prefix_sum.push_back(prefix_sum[i-1]+nums[i]);
        }
        long long int maxi_sum=0;
        unordered_map<int,int>m;
        for(int i=0;i<k-1;i++)
        m[nums[i]]++;
        for(int i=k-1;i<n;i++)
        {
            m[nums[i]]++;
            
            if(m.size()==k)
            {
                maxi_sum= max(maxi_sum,prefix_sum[i]-prefix_sum[i-k+1]+nums[i-k+1]);
            }

            m[nums[i-k+1]]--;
            if(m[nums[i-k+1]]==0)
            m.erase(nums[i-k+1]);


        }
        return maxi_sum;
        
    }