int majorityElement(vector<int>& nums) {

        int me,count=0;
        for(auto i:nums)
        {
            if(count==0)
            me=i;
            if(i==me)
            count++;
            else
            count--;
        }
        return me;
        
    }