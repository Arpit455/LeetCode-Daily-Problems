vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(int i=0;i<nums.size();i++)
        {
            pq.push({nums[i],i});
        }
        while(k)
        {
            auto mini=pq.top();
            pq.pop();
            nums[mini.second]=multiplier*nums[mini.second];
            pq.push({nums[mini.second],mini.second});
            k--;
        }
        return nums;
        
    }