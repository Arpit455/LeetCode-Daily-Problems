int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        
        vector<pair<int,int>>p;
        for(int i=0;i<profit.size();i++)
        {
            p.push_back({difficulty[i],profit[i]});
        }
        sort(p.begin(),p.end());
        sort(worker.begin(),worker.end());
        int ans=0,max_profit=0,j=0;

        for(int i=0;i<worker.size();i++)
        {
           while(j<difficulty.size() && p[j].first<=worker[i])
           {
            max_profit=max(max_profit,p[j].second);
            j++;
           }
           ans+=max_profit;
        }
        return ans;
        
    }