bool canConstruct(string s, int k) {
        if(s.size()<k)
        return false;

        vector<int>freq(26,0);
        for(auto i:s)
        freq[i-'a']++;

        int oddOccurences=0;
        for(auto i:freq)
        {
            if(i%2!=0)
            oddOccurences++;
        }
        return oddOccurences<=k;
        
    }