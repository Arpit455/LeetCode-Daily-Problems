long long countSubarrays(vector<int>& nums, int k) {

        int max_num=0;
        for(auto i:nums)
        max_num=max(max_num,i);

        int count=0,i=0,j=0;
        long long int ans=0;
        while(j<nums.size())
        {
            if(nums[j]==max_num)
            count++;
            if(count==k)
            {
                while(count==k)
                {
                  if(nums[i]==max_num)
                  count--;
                  ans+=nums.size()-j;
                  i++;
                }
                

            }
            j++;
        }
        return ans;
        
    }