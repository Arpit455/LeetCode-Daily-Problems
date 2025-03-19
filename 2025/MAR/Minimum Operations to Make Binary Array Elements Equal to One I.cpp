class Solution {
public:
    int minOperations(vector<int>& nums) {

        int operations=0;
        int n=nums.size();
        for(int i=0;i<n-2;i++)
        {
            if(nums[i]==0)
            {
                nums[i]=1;
                operations++;
                for(int j=1;j<=2;j++)
                nums[i+j]=!nums[i+j];
            }
        }

        for(int i=n-2;i<n;i++)
        {
            if(nums[i]==0)
            return -1;
        }
        return operations;
        
    }
};