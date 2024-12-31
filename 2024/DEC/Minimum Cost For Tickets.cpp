int dp[366][400]={0};
    int helper(int i,int travel,vector<int>& days, vector<int>& costs)
    {
        if(i>=days.size())
        return 0;

        
        if(travel>=days[i])
        return helper(i+1,travel,days,costs);

        if(dp[i][travel]!=0)
        return dp[i][travel];

        int minicost=INT_MAX;
        minicost=min(minicost,costs[0]+helper(i+1,days[i],days,costs));
        minicost=min(minicost,costs[1]+helper(i+1,days[i]+6,days,costs));
        minicost=min(minicost,costs[2]+helper(i+1,days[i]+29,days,costs));

        return dp[i][travel]=minicost;

    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {

        return helper(0,0,days,costs);
        
    }