class Solution {
public:
    
    bool possible(long long mid ,vector<int>& ranks, int cars )
    {
        long long count=0;

        for(auto i:ranks)
        {
            count+=sqrt(mid/i);
        }

        return count>=cars;
    }
    long long repairCars(vector<int>& ranks, int cars) {

        int mini_rank=INT_MAX;

        for(auto i:ranks)
        mini_rank=min(mini_rank,i);

        long long low=1,high=(long long)mini_rank*cars*cars;

        long long mini_minutes;

        while(low<=high)
        {
            long long mid=low+(high-low)/2;

            if(possible(mid,ranks,cars))
            {
                mini_minutes=mid;
                high=mid-1;
            }
            else
            low=mid+1;

        }

        return mini_minutes;
        
    }
};