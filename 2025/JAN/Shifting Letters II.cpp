char operation(char c ,int x)
    {
        int temp= (c-'a')+x;
        return (temp%26 +26)%26+'a';
    }
    string shiftingLetters(string s, vector<vector<int>>& shifts) {

        int n=s.size();
        vector<int>diff(n,0);
        int x;

        for(auto i:shifts)
        {
            
            if(i[2]==0)
            x=-1;
            else
            x=1;
            diff[i[0]]+=x;
            if(i[1]<n-1)
            diff[i[1]+1]-=x;
        }
        for(int i=1;i<n;i++)
        diff[i]+=diff[i-1];


        for(int i=0;i<n;i++)
        s[i]=operation(s[i],diff[i]);

        return s;
        
    }