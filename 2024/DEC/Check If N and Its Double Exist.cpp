bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int>m;
        for(auto i:arr)
        m[i]++;

        for(auto i:arr)
        {
            if(i==0)
            {
                if(m[i]>=2)
                return true;
            }
            else
            {
             if(m.find(2*i)!=m.end())
            return true;
            } 
        }
        return false;
        
    }