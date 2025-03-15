class Solution {
public:

bool isPossible(int capability,int k,vector<int>& nums)
{
    int count=0 ,i=0;
    while(i<nums.size())
    {
        if(nums[i]<=capability)
        {
            count++;
            i+=2;
        }
        else
        i++;
    }
    return count>=k;
}
    int minCapability(vector<int>& nums, int k) {

        int mini_capability=INT_MAX,max_capability=INT_MIN;
        for(auto i :nums)
        {
            mini_capability=min(mini_capability,i);
            max_capability=max(max_capability,i);

        }

        int low=mini_capability, high=max_capability,ans;

        while(low<=high)
        {
            int mid=low+(high-low)/2;

            if(isPossible(mid,k,nums))
            {
                ans=mid;
                high=mid-1;
            }
            else
            low=mid+1;
        }
        return ans;
        
    }
};