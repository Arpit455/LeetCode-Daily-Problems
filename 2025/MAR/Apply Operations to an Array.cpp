class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int i=0,j=0;
        int n=nums.size();
        while(i<n-1)
        {
            if(nums[i]==nums[i+1])
            {
                nums[i]*=2;
                nums[i+1]=0;
                i+=2;
            }
            else
            i++;
        }
        i=0,j=0;
        while(j<n)
        {
            if(nums[j]!=0)
            {
                nums[i]=nums[j];
                i++;
            }
            j++;
        }
        for(j=i;j<n;j++)
        nums[j]=0;
        return nums;
    }
};