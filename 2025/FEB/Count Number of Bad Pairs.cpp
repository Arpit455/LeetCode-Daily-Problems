long long countBadPairs(vector<int>& nums) {

        long long n=nums.size();
        long long total=((n-1)*(n))/2;
        unordered_map<int,int>m;
        long long goodpairs=0;
        for(int i=0;i<nums.size();i++)
        {
            goodpairs+=m[nums[i]-i];
            m[nums[i]-i]++;
        }


        return total-goodpairs;
        
    }