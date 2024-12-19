int maxChunksToSorted(vector<int>& arr) {

        stack<int>s;
        for(auto i:arr)
        {   int maxi=i;
            while(!s.empty() && s.top()> i){
            maxi=max(s.top(),maxi);
            s.pop();
            }
            s.push(maxi);
        }
        return s.size();
        
    }