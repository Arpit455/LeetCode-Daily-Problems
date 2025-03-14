class Solution {
public:
    bool possible(int mid ,vector<int>& candies, long long k)
    {
        long long children=0;
        for(auto i:candies)
        {
            children+=i/mid;
        }
        return children>=k;
    }
    int maximumCandies(vector<int>& candies, long long k) {

        long long candiesSum=0;
        int n=candies.size();

        int maxPile=0;

        for(auto i:candies)
        {candiesSum+=i;
        maxPile=max(maxPile,i);
        }

        if(candiesSum<k)
        return 0;

        int low=1 , high=maxPile;

        int maximumCandies;

        while(low<=high)
        {
           int mid=low+(high-low)/2;

           if(possible(mid,candies,k))
           {
            maximumCandies=mid;
            low=mid+1;
           }
           else
           high=mid-1;
        }

        return maximumCandies;



        
    }
};