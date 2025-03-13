class Solution {
public:
    bool zeroArray(int k,vector<int> nums, vector<vector<int>>& queries)
    {
        int n=nums.size();
        vector<int>diff(n+1,0);
        for(int i=0;i<=k;i++)
        {
            diff[queries[i][0]]-=queries[i][2];
             if(queries[i][1]<nums.size())
             diff[queries[i][1]+1]+=queries[i][2];            
        }
        
        for(int i=1;i<n;i++)
        diff[i]+=diff[i-1];

        for(int i=0;i<n;i++)
        {
            nums[i]+=diff[i];
            if(nums[i]>0)
            return false;
        }
        return true;


    }
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {


        int low=0, high=queries.size()-1;
        int minK=-1;

        bool alreadyZero = true;
    for (int num : nums) {
        if (num > 0) {
            alreadyZero = false;
            break;
        }
    }
    if (alreadyZero) return 0;

        while(low<=high)
        {
           int mid=(high-low)/2+low;

           if(zeroArray(mid,nums,queries))
           {high=mid-1;
           minK=mid+1;
           }
           else
           low=mid+1;

        }

        return minK;
        
    }
};