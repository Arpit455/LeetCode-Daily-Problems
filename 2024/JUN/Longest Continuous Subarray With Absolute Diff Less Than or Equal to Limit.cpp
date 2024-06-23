 int longestSubarray(vector<int>& nums, int limit) {
        set<pair<int,int>>s;
        int max_count=0,temp_count=0,i=0,j=0;
        while(j<nums.size())
        {
            if(s.size()==0)
            {
                temp_count++;
                s.insert({nums[j],j});
                j++;
            }
            else
            {
                if(!s.empty() &&(abs(nums[j]-s.begin()->first)>limit ||abs(nums[j]-s.rbegin()->first)>limit))
                {
                    s.erase({nums[i],i});
                    i++;
                    temp_count--;
                }
                else
                {
                    temp_count++;
                    s.insert({nums[j],j});
                    j++;
                }
                
            }
            max_count=max(max_count,temp_count);

        }
        return max_count;
        
    }