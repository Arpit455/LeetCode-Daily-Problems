long long findScore(vector<int>& nums) {
        priority_queue<pair<int, int>, vector<pair<int, int>>,
                       greater<pair<int, int>>>
            pq;
        unordered_set<int> s;
        for (int i = 0; i < nums.size(); i++) {
            pq.push({nums[i], i});
        }
        long long int score = 0;
        while (!pq.empty()) {
            auto temp = pq.top();
            pq.pop();
            if (s.find(temp.second) == s.end()) {
                score += temp.first;
                if (temp.second > 0) {
                    s.insert(temp.second - 1);
                }
                if (temp.second < nums.size() - 1) {
                    s.insert(temp.second + 1);
                }
            }
        }
        return score;
    }