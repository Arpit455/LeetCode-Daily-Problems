int minChanges(string s) {
        int swaps=0;
        for(int i=0;i<s.length()-1;i=i+2)
        {
            if(s[i]!=s[i+1])
            swaps++;
        }
        return swaps;
        
    }