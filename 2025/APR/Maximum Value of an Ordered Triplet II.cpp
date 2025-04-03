class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n=nums.size();

        vector<int>suffixMax(n);
        suffixMax[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            suffixMax[i]=max(suffixMax[i+1],nums[i]);
        }
        int prefixMax=nums[0];
        long long ans=0;
        for(int i=1;i<n-1;i++)
        {
            ans=max(ans,(long long)(prefixMax-nums[i])*suffixMax[i+1]);
            prefixMax=max(prefixMax,nums[i]);
        }

        return ans;
        
    }
};