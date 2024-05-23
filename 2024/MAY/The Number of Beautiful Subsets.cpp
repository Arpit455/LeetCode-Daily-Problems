int helper(int i,vector<int>& nums,unordered_map<int,int>&m,int k)
{
    if(i==nums.size())
    return 1;

    int ans=helper(i+1,nums,m,k);
    if(m[nums[i]-k]==0 && m[nums[i]+k]==0)
    {
        m[nums[i]]++;
        ans+=helper(i+1,nums,m,k);
        m[nums[i]]--;

    }
    return ans;
}
    int beautifulSubsets(vector<int>& nums, int k) {

        int ans=0;
        unordered_map<int,int>m;
        ans=helper(0,nums,m,k);
        return ans-1;
}