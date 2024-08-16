int maxDistance(vector<vector<int>>& arrays) {

        int mini=arrays[0][0],maxi=arrays[0].back();
        int ans=0;
        for(int i=1;i<arrays.size();i++)
        {
            ans=max(ans,max(arrays[i].back()-mini,maxi-arrays[i][0]));
            mini=min(mini,arrays[i][0]);
            maxi=max(maxi,arrays[i].back());
        }
        return ans;

        
    }