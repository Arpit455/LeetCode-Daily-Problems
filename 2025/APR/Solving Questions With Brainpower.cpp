class Solution {
public:
long long dp[1000000]={0};
long long maxScore(int i,vector<vector<int>>& questions)
{
    if(i>=questions.size())
    return 0;
    if(dp[i]!=0)
    return dp[i];

    return dp[i]=max(questions[i][0]+maxScore(i+1+questions[i][1],questions),maxScore(i+1,questions));
}
    long long mostPoints(vector<vector<int>>& questions) {

        return maxScore(0,questions);
        
    }
};