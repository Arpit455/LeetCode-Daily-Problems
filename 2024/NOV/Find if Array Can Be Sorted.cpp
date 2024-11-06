int num_of_bits(int x)
{
    int count=0;
    while(x)
    {
        if(x&1)
        count++;
        x=x>>1;
    }
    return count;
}
    bool canSortArray(vector<int>& nums) {

        int n= nums.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                if(nums[j]>nums[j+1] &&( num_of_bits(nums[j])==num_of_bits(nums[j+1])))
                swap(nums[j],nums[j+1]);
            }
        }

        for(int i=0;i<n-1;i++)
        {
            if(nums[i]>nums[i+1])
            return false;
        }
        return true;
        
    }