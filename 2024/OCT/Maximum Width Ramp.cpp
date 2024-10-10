int maxWidthRamp(vector<int>& nums) {
        int n=nums.size();
        int temp[n],maxi=nums[n-1];
        temp[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            if(maxi<nums[i])
            maxi=nums[i];
            temp[i]=maxi;
        }

        int l=0,r=1,maxWidth=0;
        while(r<n && l<n)
        {
          if(temp[r]>=nums[l])
          {
            maxWidth=max(maxWidth,r-l);
             r++;
          }
          else
          {
            l++;
          }
        }
        return maxWidth;
        
    }