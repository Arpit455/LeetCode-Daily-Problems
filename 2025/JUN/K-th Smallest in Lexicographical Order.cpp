class Solution {
public:
    int count(long curr,long next,int n)
    {
        int count_num=0;
        while(curr<=n)
        {
            count_num+=next-curr;
            curr*=10;
            next*=10;
            next=min(next,(long)n+1);
        }
        return count_num;
    }
    int findKthNumber(int n, int k) {

        int curr=1;
        k--;

        while(k>0)
        {
            int skipcounts=count(curr,curr+1,n);

            if(skipcounts<=k)
            {
                curr++;
                k-=skipcounts;

            }
            else
            {
                curr*=10;
                k--;
            }
        }

        return curr;
        
    }
};