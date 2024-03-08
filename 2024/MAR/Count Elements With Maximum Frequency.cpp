 int maxFrequencyElements(vector<int>& nums) {
        
        int size=nums.size();
        unordered_map<int,int>freq;
       int  max_freq=0;
        for(int i=0;i<size;i++)
        {
            freq[nums[i]]++;
            max_freq=max(max_freq,freq[nums[i]]);
        }
        
        int ans=0;
        for(auto it:freq)
        {
            if(it.second==max_freq)
                ans+=it.second;
        }
        return ans;
        
    }