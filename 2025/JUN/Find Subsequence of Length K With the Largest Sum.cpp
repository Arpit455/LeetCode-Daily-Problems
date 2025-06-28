class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {

        typedef pair<int,int> p;

        priority_queue<p,vector<p>,greater<p>>pq;

        for(int i=0;i<nums.size();i++)
        {
            pq.push({nums[i],i});

            if(pq.size()>k)
            pq.pop();
        }
        vector<p>v;
        vector<int>ans;

        for(int i=0;i<k;i++)
        {
        v.push_back({pq.top().second,pq.top().first});
        pq.pop();
        }
        sort(v.begin(),v.end());

        for(auto i:v)
        ans.push_back(i.second);
        
        return ans;
        
    }
};