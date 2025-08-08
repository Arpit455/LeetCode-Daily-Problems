class Solution {
public:
vector<pair<int,int>>chances={{100,0},{75,25},{50,50},{25,75}};

double helper(int a ,int b,vector<vector<double>>&dp)
{
   
    if(a<=0 && b<=0)
    return 0.5;
     if(a<=0)
    return 1.0;
    if(b<=0)
    return 0.0;

    if(dp[a][b]!=-1.0)
    return dp[a][b];
    double ans=0.0;
    for(auto i:chances)
    {
        ans+=helper(a-i.first,b-i.second,dp);
    }
    return dp[a][b]=0.25*ans;
}
    double soupServings(int n) {

        if(n>=4500)
        return 1;
        vector<vector<double>>dp(4500,vector<double>(4500,-1.0));

        return helper(n,n,dp);
        
    }
};