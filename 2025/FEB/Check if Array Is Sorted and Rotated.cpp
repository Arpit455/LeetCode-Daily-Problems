bool check(vector<int>& nums) {

        int i=1,n=nums.size();
        while(i<n)
        {
            if(nums[i]>=nums[i-1])
            i++;
            else
            {
                if(nums[n-1]>nums[0])
                return false;
                i++;
                while(i<n)
                {
                    if(nums[i]>=nums[i-1])
                    i++;
                    else
                    return false;
                }
            }
        }
        return true;
        
    }