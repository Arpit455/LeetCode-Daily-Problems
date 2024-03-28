int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        int maxi=0,max_length=0,i=0,j=0;
        while(j<nums.size())
        {
            if(freq[nums[j]]<k)
            {
                freq[nums[j]]++;
                j++;
                max_length++;
            }
            else
            {
                while(nums[i]!=nums[j])
                {
                    freq[nums[i]]--;
                    i++;
                    max_length--;
                }
                    i++;
                    j++;
            }
            maxi=max(maxi,max_length);
        }
        return maxi;
        
    }