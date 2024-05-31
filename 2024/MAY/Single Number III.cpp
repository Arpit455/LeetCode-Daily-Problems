public:
    vector<int> singleNumber(vector<int>& nums) {

        int temp=0;
        for(auto i:nums)
        temp^=i;
        int pos=0;
        while(!(1&temp))
        {
            temp=temp>>1;
            pos++;
        }
        int first=0,second=0;
        for(auto i:nums)
        {
            if((i>>pos)&1)
            first^=i;
            else
            second^=i;
        }
        vector<int>ans;
        ans.push_back(first);
        ans.push_back(second);
        return ans;
        
    }