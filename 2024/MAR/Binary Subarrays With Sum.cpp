int numSubarraysWithSum(vector<int>& nums, int goal) {
         
         unordered_map<int,int>sum_count;
         int prefix_sum=0, ans=0;
         sum_count[0]=1;
         for(int i=0;i<nums.size();i++)
         {
            prefix_sum+=nums[i];
            if(sum_count.find(prefix_sum-goal)!=sum_count.end())
            {
                ans+=sum_count[prefix_sum-goal];
            }
            sum_count[prefix_sum]++;
         }
         return ans;
        
    }