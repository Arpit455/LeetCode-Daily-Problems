int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {

       priority_queue<pair<int,int>>q1;
       priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q2;

       for(int i=0;i<profits.size();i++)
       {
         q2.push({capital[i],profits[i]});
       }
       while(k!=0)
       {
        while(!q2.empty() && q2.top().first<=w)
        {
            q1.push({q2.top().second,q2.top().first});
            q2.pop();
        }
        if(!q1.empty())
        {
        w+=q1.top().first;
        q1.pop();
        }
        k--;
       }
       return w;

    }