class Solution {
public:

    long long putMarbles(vector<int>& weights, int k) {

        int n=weights.size();
        vector<int>pairSum(n-1,0);

        for(int i=0;i<n-1;i++)
        {
           pairSum[i]=weights[i]+weights[i+1];
        }

        sort(pairSum.begin(),pairSum.end());
        long long maxScore=0,minScore=0;

        for(int i=0;i<k-1;i++)
        {
            maxScore+=pairSum[n-2-i];
            minScore+=pairSum[i];
        }

        return maxScore-minScore;
        
    }
};