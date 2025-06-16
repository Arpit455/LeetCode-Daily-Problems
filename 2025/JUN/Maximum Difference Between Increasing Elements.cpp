class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();

        vector<int>suffix(n);

        suffix[n-1]=nums[n-1];

        for(int i=n-2;i>=0;i--)
        {
            suffix[i]=max(suffix[i+1],nums[i]);
        }
        int maxDiff=-1;

        for(int i=0;i<n-1;i++)
        {
            maxDiff=max(maxDiff,suffix[i+1]-nums[i]);
        }

        return maxDiff==0 ?-1 :maxDiff;
        
    }
};