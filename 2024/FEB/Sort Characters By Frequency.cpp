 string frequencySort(string s) {
        unordered_map<char,int>freq;
        for(auto i:s)
        {
            freq[i]++;
        }
        vector<pair<int,char>>freq_sorted;
        for(auto i:freq)
        {
            freq_sorted.push_back({i.second,i.first});
        }
        sort(freq_sorted.begin(),freq_sorted.end());
        string ans="";
        for(int i=freq_sorted.size()-1;i>=0;i--)
        {
           for(int j=0;j<freq_sorted[i].first;j++)
           {
               ans+=freq_sorted[i].second;
           }
        }
        return ans;
        
    }