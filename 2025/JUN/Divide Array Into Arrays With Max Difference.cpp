class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {

        sort(nums.begin(),nums.end());

        vector<vector<int>>ans;
        int i=0;
        while(i<nums.size())
        {
            vector<int>temp;
            temp.push_back(nums[i]);
            for(int j=i+1;j<i+3;j++)
            {
                if(nums[j]-nums[i]>k)
                return {};
                else
                temp.push_back(nums[j]);
            }
            ans.push_back(temp);
            i+=3;
        }
        return ans;
        
    }
};