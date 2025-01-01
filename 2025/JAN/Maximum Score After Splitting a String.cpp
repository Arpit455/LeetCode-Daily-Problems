int maxScore(string s) {
        int n=s.size();
        vector<int>one(n,0);
        one[n-1]=s[n-1]=='1' ? 1 :0;
        for(int i=n-2;i>=0;i--)
        {
            s[i]=='1' ? one[i]=one[i+1]+1 : one[i]=one[i+1];
        }
        int maxiScore=0;
        int zeros=0;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]=='0')
            zeros++;
            maxiScore=max(maxiScore,zeros+one[i+1]);
        }
        return maxiScore;
        
    }