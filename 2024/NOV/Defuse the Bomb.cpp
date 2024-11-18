vector<int> decrypt(vector<int>& code, int k) {

        int n=code.size();
        int arr[2*n];
        arr[0]=code[0];

        for(int i=1;i<2*n;i++)
        {
            arr[i]=arr[i-1]+code[i%n];
        }
        vector<int>ans;
        if(k==0)
        {
            for(int i=0;i<n;i++)
            ans.push_back(0);
            return ans;
        }
        else if(k>0)
        {
            for(int i=0;i<n;i++)
            ans.push_back(arr[i+k]-arr[i]);
            return ans;

        }
        else
        {
            for(int i=n;i<2*n;i++)
            ans.push_back(arr[i-1]-arr[i+k-1]);
            return ans;
        }
        
    }