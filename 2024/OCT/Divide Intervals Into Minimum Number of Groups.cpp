int minGroups(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        priority_queue<int,vector<int>,greater<int>>q;
        for(auto i:intervals)
        {
            if(q.empty() || q.top()>=i[0])
            q.push(i[1]);
            else
            {
                q.pop();
                q.push(i[1]);
            }

        }
        return q.size();
        
    }