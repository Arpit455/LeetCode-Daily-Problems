 int countConsistentStrings(string allowed, vector<string>& words) {

        unordered_set<char>s;
        int count=0;
        for(auto i:allowed)
        s.insert(i);
        for(int i=0;i<words.size();i++)
        {
            bool present=true;
            for(auto j:words[i])
            {
               if(s.count(j)==0)
               {
                present=false;
                break;
               }
            }
            if(present)
            count++;
        }
        return count;
        
    }