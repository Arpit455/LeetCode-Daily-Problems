int specialArray(vector<int>& nums) {

        int n=nums.size();
        for(int i=0;i<=n;i++)
        {
            int num=0;
            for(int j=0;j<n;j++)
            {
                if(nums[j]>=i)
                num++;
            }
            if(num==i)
            return i;
        }
        return -1;
        
    }