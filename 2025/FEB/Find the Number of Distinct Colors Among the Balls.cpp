vector<int> queryResults(int limit, vector<vector<int>>& queries) {

        unordered_map<int,int>color,balls;
        vector<int>ans;

        for(auto i:queries)
        {
            if(balls.find(i[0])!=balls.end())
            {
                color[balls[i[0]]]--;
                if(color[balls[i[0]]]==0)
                color.erase(balls[i[0]]);
            }
             balls[i[0]]=i[1];
             color[i[1]]++;
            ans.push_back(color.size());
        }

        return ans;
        
    }