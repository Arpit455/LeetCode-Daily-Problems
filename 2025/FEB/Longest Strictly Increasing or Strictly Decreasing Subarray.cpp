int longestMonotonicSubarray(vector<int>& nums) {

        int si=1,sd=1;
        int temp=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>nums[i-1])
            temp++;
            else
            temp=1;

            si=max(si,temp);
        }
        temp=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<nums[i-1])
            temp++;
            else
            temp=1;

            sd=max(sd,temp);
        }
        return max(si,sd);
        
    }