int countPalindromicSubsequence(string s) {

        int n=s.size();
        vector<pair<int,int>>v(26);

        for(int i=0;i<n;i++)
        {
            if(v[s[i]-'a'].first==0)
            v[s[i]-'a'].first=i+1;

            v[s[i]-'a'].second=i+1;

        }
        int unique_palindrome=0;
        for(int i=0;i<26;i++)
        {
            if(v[i].first!=0 && v[i].first!=v[i].second)
            {
                unordered_set<char>st;
                for(int j=v[i].first;j<v[i].second-1;j++)
                st.insert(s[j]);

                unique_palindrome+=st.size();
            }
        }
        return unique_palindrome;
        
    }