string customSortString(string order, string s) {
        unordered_map<char,int>freq;
        string ans="";
        for(auto i:s)
        freq[i]++;
        for(auto i:order)
        {
            if(freq.find(i)!=freq.end())
            {
                for(int j=0;j<freq[i];j++)
                ans+=i;
                freq.erase(i);
            }
        }
        for(auto i:freq)
        {
            for(int j=0;j<i.second;j++)
            ans+=i.first;
        }
        return ans;
        
    }