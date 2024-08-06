int minimumPushes(string word) {

        priority_queue<pair<int, char>> q;
        unordered_map<char, int> m;
        for (auto i : word)
            m[i]++;
        for (auto i : m)
            q.push({i.second, i.first});

        int ans = 0;
        int count = 1;
        for (int i = 0; i < ceil(m.size() / 8) + 1; i++) {
            for (int j = 1; j <= 8; j++) {
                if (!q.empty()) {
                    ans += count * q.top().first;
                    q.pop();
                }
            }
            count++;
        }
        return ans;
    }