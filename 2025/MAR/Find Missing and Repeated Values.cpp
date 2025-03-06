class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {


        long long sum=0,sqursum=0;
        long long n=grid.size();

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                sum+=grid[i][j];
                sqursum+=grid[i][j]*grid[i][j];
            }
        }
        n=n*n;
        long long correctsum=(n*(n+1))/2,correctsqursum=(n*(n+1)*(2*n+1))/6;

        long long diff=sum-correctsum;
        long long add=(sqursum-correctsqursum)/diff;

        int x=(diff+add)/2,y=(add-diff)/2;

        return {x,y};





        
    }
};