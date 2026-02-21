class Solution {
    public int countPrimeSetBits(int left, int right) {
        
        int n = 1000000;
        int ans=0;

        boolean[] isPrime = new boolean[n + 1];
        Arrays.fill(isPrime, true);

        isPrime[0] = false;
        isPrime[1] = false;

        for (int i = 2; i * i <= n; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        for(int i =left; i<=right;i++)
        {
            int countOne =0;
            int temp =i;
            while(temp!=0)
            {
                if((temp&1)==1)
                countOne++;

                temp = temp>>1;
            }
            if(isPrime[countOne])
            ans++;

        }

        return ans;
    }
}