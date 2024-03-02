vector<int> sortedSquares(vector<int>& nums) {
        int pos;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>=0)
            {
                pos=i;
                break;
            }
        }
        int i=pos,j=pos-1;
        vector<int>ans;
        while(i<nums.size() && j>=0)
        {
           if(abs(nums[j])<nums[i])
           {
               ans.push_back(nums[j]*nums[j]);
               j--;
           }
           else
           {
               ans.push_back(nums[i]*nums[i]);
               i++;
           }
        }
        while(i<nums.size())
        {
            ans.push_back(nums[i]*nums[i]);
               i++;
        }
        while(j>=0)
        {
            ans.push_back(nums[j]*nums[j]);
               j--;
        }

        return ans;
        
    }