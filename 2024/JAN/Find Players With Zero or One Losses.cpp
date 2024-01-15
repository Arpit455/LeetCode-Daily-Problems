 vector<vector<int>> findWinners(vector<vector<int>>& matches) {

        unordered_map<int,int>losers;
        unordered_set<int> unique_winners;
        for(int i=0;i<matches.size();i++)
        {
            losers[matches[i][1]]++;
        }
        vector<vector<int>>ans;
        vector<int>winners;
        vector<int>loser;
        for(int i=0;i<matches.size();i++)
        {
            if(losers.find(matches[i][0])==losers.end())
            unique_winners.insert(matches[i][0]);
            if(losers[matches[i][1]]==1)
            loser.push_back(matches[i][1]);

        }
        for(auto it:unique_winners)
        {
            winners.push_back(it);
        }
        sort(winners.begin(),winners.end());
        sort(loser.begin(),loser.end());
        ans.push_back(winners);
        ans.push_back(loser);
        return ans;
        
    }