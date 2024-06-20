bool ispossible(int distance,int m,vector<int>& position)
    {
        int prev=0,count=1;

        for(int i=0;i<position.size();i++)
        {
            if((position[i]-position[prev])>=distance)
            {
                count++;
                prev=i;
            }
        }
        return count>=m;
    }
    int maxDistance(vector<int>& position, int m) {

        sort(position.begin(),position.end());
        int low=0,high=position[position.size()-1],mid,ans;
        while(low<=high)
        {
           mid=(low+high)/2;
           if(ispossible(mid,m,position))
           {
             low=mid+1;
            ans=mid;
           }
           
           else
           high=mid-1;

        }
        return ans;
        
    }