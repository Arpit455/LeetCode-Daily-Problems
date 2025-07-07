class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {

        sort(events.begin(), events.end());

        int num_of_events = 0, day = events[0][0];

        priority_queue<int, vector<int>, greater<int>> pq;

        int i = 0, n = events.size();

        while (!pq.empty() || i < n) {
            while (i < n && events[i][0] == day) {
                pq.push(events[i][1]);
                i++;
            }

            while (!pq.empty() && pq.top() < day)
                pq.pop();

            if (!pq.empty()) {
                pq.pop();
                num_of_events++;
            }

            day++;
        }

        return num_of_events;
    }
};