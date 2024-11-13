long long lower_bound(vector<int>&nums,int l,int h ,int target)
    {
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if(nums[mid]>=target)
            h=mid-1;
            else
            l=mid+1;

        }
        return l;
    }
    long long countFairPairs(vector<int>& nums, int lower, int upper) {

        sort(nums.begin(),nums.end());

        long long int ans=0;

        for(int i=0;i<nums.size();i++)
        {
            int l=lower_bound(nums,i+1,nums.size()-1,lower-nums[i]);
            int h=lower_bound(nums,i+1,nums.size()-1,upper-nums[i]+1);

            ans+=h-l;
        }
        return ans;

        
    }