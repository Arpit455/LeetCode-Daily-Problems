class Solution {
public:
int dp[1000][1001];
vector<string>ans;
bool isHamming(string a,string b)
{
    if(a.size()!=b.size())
    return false;
    int n=a.size();
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        count++;
        if(count>1)
        return false;
    }

    return count==0 ? false:true;
}
    int helper(int i,int prev,vector<string>& words, vector<int>& groups)
    {
       if(i>=words.size())
       return 0;

       if(dp[i][prev+1]!=-1)
       return dp[i][prev+1];

       int not_take=helper(i+1,prev,words,groups);
       int take=0;

       if(prev==-1 || (groups[prev]!=groups[i] &&  isHamming(words[i],words[prev]) ))
       take=1+helper(i+1,i,words,groups);

       return dp[i][prev+1]= max(take,not_take);
    }

    void backtrek(int i , int prev ,vector<string>& words, vector<int>& groups)
    {
        if(i>=words.size())
        return;

        int not_take= helper(i+1,prev,words,groups);

        int take=0;

        if(prev==-1 || (groups[prev]!=groups[i] && isHamming(words[i],words[prev])))
        take=1+helper(i+1,i,words,groups);

        if(take>not_take)
        {
            ans.push_back(words[i]);
            backtrek(i+1,i,words,groups);
        }
        else
        backtrek(i+1,prev,words,groups);


    }
    vector<string> getWordsInLongestSubsequence(vector<string>& words, vector<int>& groups) {

        memset(dp,-1,sizeof(dp));

        backtrek(0,-1,words,groups);
        return ans;
        
    }
};