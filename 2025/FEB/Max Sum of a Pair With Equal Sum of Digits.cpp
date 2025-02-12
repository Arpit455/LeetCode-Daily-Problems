int maximumSum(vector<int>& nums) {

        unordered_map<int,priority_queue<int,vector<int>,greater<int>>>m;
        for(auto i:nums)
        {
            int temp=i;
            int sum=0;
            while(temp)
            {
                sum+=temp%10;
                temp/=10;
            }
            m[sum].push(i);
            if(m[sum].size()>2)
            m[sum].pop();

        }
        int maxsum=-1;

        for(auto i:m)
        {
             if(i.second.size()>1)
             {
                int sum=0;
                sum+=i.second.top();
                i.second.pop();
                sum+=i.second.top();

                maxsum=max(maxsum,sum);
             }
        }

        return maxsum;
        
    }