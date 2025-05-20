class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {

        int n=nums.size();
        vector<int>temp(n,0);

        for(auto i:queries)
        {
           temp[i[0]]++;
           if(i[1]<n-1)
           temp[i[1]+1]--;
        }

        for(int i=1;i<n;i++)
        temp[i]+=temp[i-1];


        for(int i=0;i<n;i++)
        {
            if(nums[i]>temp[i])
            return false;
        }
        return true;
        
    }
};