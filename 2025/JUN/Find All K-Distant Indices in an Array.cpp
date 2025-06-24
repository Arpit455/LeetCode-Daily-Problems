class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {

        set<int>s;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==key)
            {
                for(int j=max(0,i-k);j<=min((int)nums.size()-1,i+k);j++)
                {
                     s.insert(j);
                }
            }
        }

        vector<int>ans;

        for(auto i:s)
        ans.push_back(i);

        return ans;
        
    }
};