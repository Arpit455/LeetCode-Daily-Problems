int minimumSize(vector<int>& nums, int maxOperations) {
        int high=0;
        for(auto i:nums)
        high=max(high,i);

        int low=1;
        int result=INT_MAX;

        while(low<=high)
        {
            int mid= low+(high-low)/2;

            int ans=0;
            for(auto i:nums)
            {
                if(i>mid)
                {
                    ans+=ceil((double)(i-mid)/mid);
                }
            }
            if(ans>maxOperations)
                low=mid+1;
            else{
                result=min(result,mid);
                high=mid-1;
            }
            


        }
        return result;
        
    }