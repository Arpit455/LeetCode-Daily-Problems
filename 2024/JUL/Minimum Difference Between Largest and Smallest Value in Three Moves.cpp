int minDifference(vector<int>& nums) {
        if(nums.size()<5)
        return 0;
        sort(nums.begin(),nums.end());
        int left=0,right=nums.size()-4;
        int ans=INT_MAX;
        while(left<4)
        {
            ans=min(ans,nums[right]-nums[left]);
            left++;
            right++;
        }
        return ans;

        
    }