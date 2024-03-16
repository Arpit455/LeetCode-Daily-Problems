int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>sum;
        int longest_subarray=0,prefix_sum=0;

        for(int i=0;i<nums.size();i++)
        {
            nums[i]==0?prefix_sum+=-1:prefix_sum+=1;
            if(prefix_sum==0)
            {
                longest_subarray=max(longest_subarray,i+1);
            }
            else if(sum.find(prefix_sum)!=sum.end())
            {
                longest_subarray=max(longest_subarray,i-sum[prefix_sum]);
            }
            else
            sum[prefix_sum]=i;
        }
        return longest_subarray;
        
    }