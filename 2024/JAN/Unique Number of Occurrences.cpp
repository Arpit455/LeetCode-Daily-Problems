 bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>freq;
        unordered_set<int>s;
        for(int i=0;i<arr.size();i++)
        {
            freq[arr[i]]++;
        }
        for(auto it:freq)
        {
            if(s.count(it.second))
            {
                return false;
            }
            s.insert(it.second);
        }
        return true;
    }