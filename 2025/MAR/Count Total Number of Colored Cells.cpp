class Solution {
public:
    long long coloredCells(int n) {
        
        int center=2*n-1;
        long long ans=0;
        while(center>0)
        {
            
            ans+=2*center;
            center-=2;
            
        }

        return ans-(2*n-1);


        
    }
};