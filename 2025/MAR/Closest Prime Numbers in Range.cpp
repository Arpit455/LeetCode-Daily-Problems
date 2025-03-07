class Solution {
public:
    vector<int> PrimeNumbers(int n)
    {
        vector<int>prime(n+1,1);

        prime[0]=0;
        prime[1]=0;

        for(int i=2;i*i<=n;i++)
        {
            if(prime[i])
            {
                for(int j=i*i;j<=n;j+=i)
                prime[j]=0;
            }
        }
        return prime;
    }
    vector<int> closestPrimes(int left, int right) {


        vector<int> primeNumbers=PrimeNumbers(right+1);

        vector<int>isprime;

        for(int i=left;i<=right;i++)
        {
            if(primeNumbers[i])
            isprime.push_back(i);
        }

        if(isprime.size()<2)
        return {-1,-1};

        int minDifference=INT_MAX;
        vector<int>closestPrime(2,-1);

        for(int i=1;i<isprime.size();i++)
        {
            if(isprime[i]-isprime[i-1]<minDifference)
            {
                minDifference=isprime[i]-isprime[i-1];
                closestPrime[0]=isprime[i-1];
                closestPrime[1]=isprime[i];


            }
        }

        return closestPrime;
        
    }
};