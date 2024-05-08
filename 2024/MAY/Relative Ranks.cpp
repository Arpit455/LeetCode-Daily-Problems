vector<string> findRelativeRanks(vector<int>& score) {
        
        vector<int>temp=score;

        unordered_map<int,int>m;
        for(int i=0;i<score.size();i++)
        m[temp[i]]=i;
        vector<string>ans(score.size());
        sort(temp.begin(),temp.end(),greater<int>());
        for(int i=0;i<score.size();i++)
        {
            if(i==0)
            ans[m[temp[i]]]="Gold Medal";
            else if(i==1)
            ans[m[temp[i]]]="Silver Medal";
            else if(i==2)
            ans[m[temp[i]]]="Bronze Medal";
            else 
            ans[m[temp[i]]]=to_string(i+1);
        }
        return ans;
        
    }