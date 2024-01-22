vector<int> findErrorNums(vector<int>& nums) {
        unordered_set<int>s;
        vector<int>ans;
        int n=nums.size(),duplicate=0,total_sum=0;
        int ideal_sum=(n*(n+1))/2;
        for(int i=0;i<n;i++)
        {
            if(s.find(nums[i])!=s.end())
            {
                duplicate=nums[i];
                ans.push_back(nums[i]);
            }
            else
            total_sum+=nums[i];
            s.insert(nums[i]);
            

        }
        ans.push_back(ideal_sum-total_sum);

 return ans;    