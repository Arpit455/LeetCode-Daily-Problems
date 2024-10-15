long long minimumSteps(string s) {

        int black=0,i=0;
        long long int moves=0;
        while(i<s.size())
        {
            if(s[i]=='0')
            {
             moves+=i-black;
             black++;  
            }
            i++;
        }
        return moves;
        
    }