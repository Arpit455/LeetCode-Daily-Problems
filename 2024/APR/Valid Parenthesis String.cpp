int dp[101][101];
    bool isValid(int i,int count,string s)
    {
        if(count<0 )
        return false;
        if(i>=s.size())
        return count==0;
        if(dp[i][count]!=-1)
        return dp[i][count];
        if(s[i]=='(')
        return dp[i][count]=isValid(i+1,count+1,s);
        else if(s[i]==')')
        return dp[i][count]=isValid(i+1,count-1,s);
        else
        return dp[i][count]=isValid(i+1,count+1,s)||isValid(i+1,count,s)||isValid(i+1,count-1,s);

    }
    bool checkValidString(string s) {
        memset(dp,-1,sizeof(dp));
        return isValid(0,0,s);
        
    }