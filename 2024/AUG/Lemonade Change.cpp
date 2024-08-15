bool lemonadeChange(vector<int>& bills) {

        unordered_map<int,int>change;
        for(auto i:bills)
        {
            if(i==5)
            change[5]++;
            else if (i==10)
            {
                if(change[5]==0)
                return false;
                else{
                change[5]--;
                change[10]++;
                }
            }
            else
            {
                if(change[10]>0 && change[5]>0)
                {
                    change[10]--;
                    change[5]--;
                }
                else if(change[5]>2)
                {
                    change[5]-=3;
                }
                else
                return false;
            }
        }
        return true;
        
    }