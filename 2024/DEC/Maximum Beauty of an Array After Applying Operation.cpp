int maximumBeauty(vector<int>& nums, int k) {

       vector<pair<int,int>>v;
       for(auto i:nums)
       {
        pair<int,int> temp={i-k,i+k};
        v.push_back(temp);
       }
       sort(v.begin(),v.end());
       int count =1,i=0,j=1;
       while(j<nums.size())
       {
          if(v[j].first<=v[i].second)
          {
            count=max(count,j-i+1);
            j++;
          }
          else
          {
            while(v[i].second< v[j].first)
            i++;
          }
       }
       return count;
        
    }