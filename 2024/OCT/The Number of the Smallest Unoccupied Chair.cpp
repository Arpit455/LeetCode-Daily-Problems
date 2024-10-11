int smallestChair(vector<vector<int>>& times, int targetFriend) {

        vector<pair<pair<int,int>,int>>time;
        for(int i=0;i<times.size();i++)
        {
            time.push_back({{times[i][0],times[i][1]},i});
        }
        priority_queue<int,vector<int>,greater<int>>seats;
        for(int i=0;i<times.size();i++)
        seats.push(i);

        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>vacate_seats;

        sort(time.begin(),time.end());
        for(int i=0;i<time.size();i++)
        {
            while(!vacate_seats.empty() && vacate_seats.top().first<=time[i].first.first)
            {
                seats.push(vacate_seats.top().second);
                vacate_seats.pop();
            }
            int seat_num=seats.top();
            seats.pop();
            vacate_seats.push({time[i].first.second,seat_num});
            if(time[i].second==targetFriend)
            return seat_num;
        }
        return 0;
        
    }