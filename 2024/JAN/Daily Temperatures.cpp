vector<int> dailyTemperatures(vector<int>& temperatures) {
        int i=temperatures.size()-1;
        vector<int>ans(i+1);
        stack<pair<int,int>>s;
        while(i>=0)
        {
                int count=1;
                while(!s.empty() && s.top().first<=temperatures[i])
                {
                    auto it=s.top();
                    s.pop();
                    count+=it.second;
                }
                if(s.empty())
                {
                    s.push({temperatures[i],1});
                    ans[i]=0;
                    i--;
                }
                else
                {
                    ans[i]=count;
                    s.push({temperatures[i],count});
                    i--;

                }
        }
        return ans;

   
}