int longestPalindrome(string s) {

        unordered_map<char,int>freq;
        for(auto i:s)
        freq[i]++;
        int maxLength=0;
        bool single=true;
        for(auto i:freq)
        {
           if(i.second%2==0)
           maxLength+=i.second;
           else 
           {
            maxLength+=i.second-1;
            if(single)
            {
                single=false;
            maxLength+=1;
            }
            
           }
        }
        return maxLength;
        
    }