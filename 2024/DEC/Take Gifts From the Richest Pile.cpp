long long pickGifts(vector<int>& gifts, int k) {

        priority_queue<int> pq;

        
        for(auto i:gifts)
        pq.push(i);

        while(k)
        {
            int top= pq.top();
            pq.pop();
            pq.push(sqrt(top));
            k--;
        }
        long long int sum =0;
        while(!pq.empty())
        {
            sum+=pq.top();
            pq.pop();
        }

        return sum;
        
    }