 int max_sum(int i,int k,vector<int>&arr, vector<int>&dp)
    {

        if(i==arr.size())
        return 0;
        if(dp[i]!=-1)
        return dp[i];
        int maxnum=INT_MIN;
        int ans=INT_MIN;
        int len=0;
        int n=arr.size();
      for(int j=i;j<min(n,i+k);j++)
      {
         maxnum=max(maxnum,arr[j]);
         len++;
         int sum=len*maxnum+max_sum(j+1,k,arr,dp);
         ans=max(ans,sum);
      }
      return dp[i]=ans;

    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        vector<int>dp(arr.size(),-1);
        int ans=max_sum(0,k,arr,dp);
        return ans;
        
    }