long long maxKelements(vector<int>& nums, int k) {

        long long int score=0;
        priority_queue<int>pq;
        for(auto i:nums)
        pq.push(i);
        while(k)
        {
            int temp=pq.top();
            score+=temp;
            pq.pop();
            pq.push(ceil(double(temp)/3));
            k--;
        }
        return score;
        
    }