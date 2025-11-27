class Solution {
    public long maxSubarraySum(int[] nums, int k) {

        int n=nums.length;

        long[] prefixSum=new long [n];

        long sum =0;
        long ans =Long.MIN_VALUE;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            prefixSum[i]=sum;
        }

        for(int i=0;i<k;i++)
        {
        long tempSum=0;
            for(int j=i+k-1;j<n;j=j+k)
            {
               int prev= j-k+1;
               long currSum= prefixSum[j]- ((prev-1 >=0) ? prefixSum[prev-1] : 0);
               tempSum = Math.max (currSum , tempSum+currSum);
               ans = Math.max(ans,tempSum);

            }
        }

        return ans;
        

        
    }
}