class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {

        sort(nums.begin(),nums.end());

        int start=0,end=nums.size()-1;
        int mod=1e9+7;
        long long int ans=0;

        vector<long>powertwo(end+1,1);

        for(int i=1;i<=end;i++)
        {
            powertwo[i]=(powertwo[i-1]*2)%mod;
        }

        while(start<=end)
        {
            if(nums[start]+nums[end]>target)
            end--;
            else
            {
               ans+=powertwo[end-start];
               ans%=mod;
               start++;
            }
        }

        return ans;
        
    }
};