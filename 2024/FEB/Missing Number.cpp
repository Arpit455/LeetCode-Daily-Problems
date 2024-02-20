int missingNumber(vector<int>& nums) {

        int n=nums.size();
        int ideal_sum=(n*(n+1))/2;
        int actual_sum=0;
        for(auto i:nums)
        actual_sum+=i;

        return ideal_sum-actual_sum;
        
    }