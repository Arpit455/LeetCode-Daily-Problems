int minimumLength(string s) {

        vector<int>freq(26,0);
        for(auto i:s)
        freq[i-'a']++;

        int total_length=s.size();
        for(int i=0;i<26;i++)
        {
            if(freq[i]>=3)
            {
                total_length-=((freq[i]-1)/2)*2;
            }
        }
        return total_length;
        
    }