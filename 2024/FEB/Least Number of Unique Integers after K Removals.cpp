int findLeastNumOfUniqueInts(vector<int>& arr, int k) {

        unordered_map<int,int>freq;
        int unique_element=0;
        for(auto i:arr)
        {
            if(freq.count(i)==0)
            unique_element++;
            freq[i]++;
        }
        vector<int>count;
        for(auto i:freq)
        count.push_back(i.second);

        sort(count.begin(),count.end());
        for(auto i:count)
        {
            if(k<=0)
            return unique_element;
            else
            {
                k-=i;
                if(k>=0)
                unique_element--;

            }
            
        }
        return unique_element;
        
    }