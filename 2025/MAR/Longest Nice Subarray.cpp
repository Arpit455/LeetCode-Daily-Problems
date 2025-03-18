class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {

        int i=0 ,prev=0;
        int ans=0;
        for(int j=0;j<nums.size();j++)
        {
               
                while((nums[j] &prev)!=0)
                {
                    prev^=nums[i];
                    i++;
                }
            prev=prev | nums[j];
            ans=max(ans,j-i+1);
        }
        return ans;
        
    }
};