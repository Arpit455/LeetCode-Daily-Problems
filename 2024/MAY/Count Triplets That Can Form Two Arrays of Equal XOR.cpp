int countTriplets(vector<int>& arr) {

        int ans=0;
        int n=arr.size();

      for(int i=0;i<n-1;i++)
      {
        int prefix=0;
        for(int j=1+i;j<n;j++)
        {
            prefix^=arr[j-1];
            int postfix=0;
            for(int k=j;k<n;k++)
            {                
                postfix^=arr[k];
                if(prefix==postfix)
                ans++;
                
                
            }
        }
    }
        return ans;
        
    }