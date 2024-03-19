int leastInterval(vector<char>& tasks, int n) {

        priority_queue<int>pq;
        queue<pair<int,int>>q;
        vector<int>v(26,0);
        for(auto i:tasks)
        v[i-'A']++;
        for(auto i:v)
        {
            if(i!=0)
            pq.push(i);
        }
        int time=0;
        while(!pq.empty())
        {
            time++;
            if(!q.empty() &&q.front().second==time)
            {
              pq.push(q.front().first);
              q.pop();
            }
            int i=pq.top();
            pq.pop();
            
            if(i>1)
            q.push({i-1,time+n+1});
            
        }
        while(!q.empty())
        {
            auto i=q.front();
            time=q.front().second;
            q.pop();
            if(i.first>1)
            q.push({i.first-1,time+n+1});

        }
        return time;
        
    }