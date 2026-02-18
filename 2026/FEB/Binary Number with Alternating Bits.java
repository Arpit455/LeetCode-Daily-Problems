class Solution {
    public boolean hasAlternatingBits(int n) {

        int prev =-1;

        while(n/2!=0)
        {
            if(prev ==-1)
            {
                prev = n%2;
            }
            else
            {
                if(prev == n%2)
                return false;
                prev= n%2;
            }
            n/=2;
        }
        return n==prev ? false : true;
        
    }
}