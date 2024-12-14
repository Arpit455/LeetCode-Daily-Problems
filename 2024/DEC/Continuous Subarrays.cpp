 long long continuousSubarrays(vector<int>& nums) {

        map<int,int>s;
        int i=0,j=0;
        long long int count=0;
        while(j<nums.size())
        {
            s[nums[j]]++;
            while(s.rbegin()->first-s.begin()->first>2)
            {
                s[nums[i]]--;
                if(s[nums[i]]==0)
                s.erase(nums[i]);
                i++;
            }
            count+=j-i+1;
            j++;

        }
        return count;
        
    }