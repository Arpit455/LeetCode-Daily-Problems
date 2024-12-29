int dp[1001][1001];
   int mod=1e9+7;
   long long int ll=1;

    int helper(int j, int pos,vector<string>& words, string &target ,vector<vector<int>>&freq)
    {   
        if(j>=target.size()) {
         return 1;
        }
        if(pos>=words[0].size()) {
            return 0;
        }
        if(dp[j][pos]!=-1)
        {
            return dp[j][pos];
        }
        
       long long int possibleways=0;
            possibleways+=helper(j,pos+1,words,target,freq);
                possibleways+=(ll* freq[pos][target[j] - 'a']*helper(j+1,pos+1,words,target,freq)%mod);
                possibleways%=mod;
        return dp[j][pos]=possibleways;
    }
    int numWays(vector<string>& words, string target) {

        memset(dp,-1,sizeof(dp));
        int n = words.size();
        int m = words[0].size();
         vector<vector<int>>freq(m, vector<int>(26, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                freq[j][words[i][j] - 'a']++;
            }
        }

        return helper(0,0,words,target,freq);
        
    }