vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> ans(n);
        stack<pair<int, int>> s;
        for (int i = 0; i < n; i++) {
            while (!s.empty() && s.top().first >= prices[i]) {
                    auto temp = s.top();
                    s.pop();
                    ans[temp.second] = temp.first - prices[i];
            }
                s.push({prices[i], i});
        }
        while (!s.empty()) {
            auto temp = s.top();
            s.pop();
            ans[temp.second] = temp.first;
        }
        return ans;
    }