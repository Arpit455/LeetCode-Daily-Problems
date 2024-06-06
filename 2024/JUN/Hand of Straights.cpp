bool isNStraightHand(vector<int>& hand, int groupSize) {

        int n=hand.size();
        if(hand.size()%groupSize!=0)
        return false;

        map<int,int>m;
        for(auto i:hand)
        m[i]++;
        for(auto i:m)
        {
            if(i.second==0) continue;

            for(int j=1;j<groupSize;j++)
            {
                int temp=(i.first)+j;
               if(m.find(temp)==m.end())
               return false;
               if(m[i.first+j]<m[i.first+j-1])
               return false;
            }
            int count=i.second;
            for(int j=0;j<groupSize;j++)
            {
                m[i.first+j]-=count;
            }
        }
        return true;
        
    }