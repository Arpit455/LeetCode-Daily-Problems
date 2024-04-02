bool isIsomorphic(string s, string t) {
        unordered_map<char,char>replace;
        unordered_set<char> freq;

        for(int i=0;i<s.size();i++)
        {
            if(replace.count(s[i])==0)
            {
               if(freq.count(t[i])!=0)
               return false;
               else
               {
                replace[s[i]]=t[i];
                freq.insert(t[i]);
               }
            }
            
            else
            {
                if(replace[s[i]]!=t[i])
                return false;
            }
        }
        return true;
        
    }