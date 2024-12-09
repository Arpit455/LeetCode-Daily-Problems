vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {

        vector<int>v;
        v.push_back(0);
        for(int i=1;i<nums.size();i++)
        {
            if((nums[i-1]^nums[i])&1)
            {
                v.push_back(v[i-1]);
            }
            else
            v.push_back(v[i-1]+1);
        }

        vector<bool>ans;
        for(auto i:queries)
        {
            v[i[1]]-v[i[0]]==0 ? ans.push_back(true) : ans.push_back(false);
        }

        return ans;
        
    }