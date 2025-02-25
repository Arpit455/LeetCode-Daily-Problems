class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {

        int n=arr.size();
        int mod=1e9+7;
        vector<long long int>prefix_sum(n);
        prefix_sum[0]=arr[0];

        for(int i=1;i<n;i++)
        {
            prefix_sum[i]+=prefix_sum[i-1]+arr[i];
        }
       long long int even=1,odd=0,ans=0;
        for(int i=0;i<n;i++)
        {
            if(prefix_sum[i]&1)
            {
            ans+=even;
            odd++;
            }
            else{
            ans+=odd;
            even++;
            }
            ans%=mod;

        }
        return ans;
        
    }
};