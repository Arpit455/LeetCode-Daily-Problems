vector<int> missingRolls(vector<int>& rolls, int mean, int n) {

        int mSum=0;
        for(auto i:rolls)
        mSum+=i;
        int nSum = mean*(n+rolls.size())-mSum;
       
        int maxnum=(nSum/n);
        if(nSum<n || ceil((double)nSum/n)>6)
        return {};
        
         vector<int>ans(n,maxnum);
         maxnum=nSum%n;
        for(int i=0;i<maxnum;i++)
        {
            ans[i]++;
        }
        return ans;
        
    }