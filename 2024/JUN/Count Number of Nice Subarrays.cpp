int numberOfSubarrays(vector<int>& nums, int k) {

        unordered_map<int,int>freq;
        freq[0]=1;
        int count=0,sum=0;
        for(auto i:nums)
        {
            int temp=i%2==0?0:1;
            sum+=temp;
            if(freq.find(sum-k)!=freq.end())
            count+=freq[sum-k];
            freq[sum]++;
        }
        return count;

        
    }