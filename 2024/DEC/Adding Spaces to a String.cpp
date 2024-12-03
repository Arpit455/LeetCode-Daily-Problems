string addSpaces(string s, vector<int>& spaces) {

        string ans="";
        int i=0;
        for(int j=0;j<s.size();j++)
        {
            if( i<spaces.size() && j==spaces[i])
            {
                ans+=" ";
                i++;
            }
            ans+=s[j];
        }
        return ans;
        
    }