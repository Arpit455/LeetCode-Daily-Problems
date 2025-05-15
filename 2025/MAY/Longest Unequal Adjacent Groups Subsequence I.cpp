class Solution {
public:
int dp[100][3];
vector<string>ans;
    int helper(int i,int prev,vector<string>& words, vector<int>& groups)
    {
        if(i>=groups.size())
        {
            return 0;
        }

        if(dp[i][prev+1]!=-1)
        return dp[i][prev+1];
        
        int ans=helper(i+1,prev,words,groups);
        if(groups[i]!=prev)
        {
            ans=max(ans,1+helper(i+1,groups[i],words,groups));
        }

       return dp[i][prev+1]=ans;

    }

    void backtrek(int i,int prev,vector<string>& words, vector<int>& groups )
    {
        if(i>=words.size())
        return;

        int nottake=helper(i+1,prev,words,groups);

        int take=0;

        if(groups[i]!=prev)
        {
            take=1+helper(i+1,groups[i],words,groups);
        }
        if(take>nottake){
        ans.push_back(words[i]);
        backtrek(i+1,groups[i],words,groups);
        }
        else
        backtrek(i+1,prev,words,groups);

        return ;


    }
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        memset(dp,-1,sizeof(dp));

        backtrek(0,-1,words,groups);

        return ans;
        
    }
};