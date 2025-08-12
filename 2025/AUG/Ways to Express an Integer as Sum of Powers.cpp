class Solution {
public:
    int dp[301][301];
    int mod=1e9+7;
    int helper(long long n,int maxNumber,int x)
    {
        if(n==0)
        return 1;
        if(maxNumber<=0)
        return 0;
        if(dp[n][maxNumber]!=-1)
        return dp[n][maxNumber];

        int ans=0;
        long long power=pow(maxNumber,x);
        if(power<=n)
        ans+=helper(n-power,maxNumber-1,x)%mod;
        ans+=helper(n,maxNumber-1,x)%mod;

        return dp[n][maxNumber]=ans%mod;

    }
    int intNthRoot(int a, int n) {
    long long low = 1, high = a, ans = 0;
    
    while (low <= high) {
        long long mid = low + (high - low) / 2;

        long long power = 1;
        bool overflow = false;
        for (int i = 0; i < n; i++) {
            if (power > a / mid) { 
                overflow = true;
                break;
            }
            power *= mid;
        }

        if (!overflow && power <= a) {
            ans = mid;
            low = mid + 1; 
        } else {
            high = mid - 1;
        }
    }
    return ans;
}
    int numberOfWays(int n, int x) {
        int maxNumber=intNthRoot(n,x);

        memset(dp,-1,sizeof(dp));

        return helper(n,maxNumber,x);

        
    }
};