int heightChecker(vector<int>& heights) {

        priority_queue<int>pq;
        for(auto i:heights)
        pq.push(i);

        int i=heights.size()-1,ans=0;
        while(!pq.empty())
        {
           if(heights[i]!=pq.top())
           ans++;
           pq.pop();
           i--;

        }
        return ans;
        
    }