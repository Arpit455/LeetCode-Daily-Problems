vector<vector<int>> divideArray(vector<int>& nums, int k) {

        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i=i+3)
        {
            if(nums[i+2]-nums[i]>k)
            return {};
            vector<int>temp;
            for(int j=0;j<3;j++)
            {
              temp.push_back(nums[j+i]);
            }
            ans.push_back(temp);
        }
        return ans;
        
    }