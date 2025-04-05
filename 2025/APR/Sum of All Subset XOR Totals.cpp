class Solution {
public:
    int subsetXORSum(vector<int>& nums) {

        int n=nums.size();
        int ans=0;

        for(int i=0;i<(1<<n);i++)
        {
            int operation=0;
            int temp=i;
            for(int j=0;j<n;j++)
            {
                if(temp&1)
                operation^=nums[n-j-1];
                temp=temp>>1;
            }
            ans+=operation;
        }

        return ans;
        
    }
};