bool possible (vector<int>& v,int m ,int k,int x)
    {
        int total =0;
        int count=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]<=x)
            count++;
            else
            {
              total+=count/k;
              count=0;
            }
        }
       total+=count/k;
       return total>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long int x=m, y=k;
        if(bloomDay.size()<x*y)
        return -1;

       vector<int>temp=bloomDay;
       sort(temp.begin(),temp.end());
       int low=0,high=temp.size()-1,mid;
       while(low<=high)
       {
         mid=(low+high)/2;
         if(possible(bloomDay,m,k,temp[mid]))
         high=mid-1;
         else
         low=mid+1;
       }
       return temp[low];
        
    }