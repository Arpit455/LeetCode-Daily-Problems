vector<int> maximumBeauty(vector<vector<int>>& items,
                              vector<int>& queries) {

        sort(items.begin(), items.end());

        unordered_map<int, int> m;
        vector<int> temp = queries;
        sort(temp.begin(), temp.end());

        vector<int> ans;

        int maxBeauty = 0, i = 0, j = 0;
        while (i < queries.size()) {
            while (j < items.size() && items[j][0] <= temp[i]) {
                maxBeauty = max(maxBeauty, items[j][1]);
                j++;
            }
            m[temp[i]] = maxBeauty;
            i++;
        }
        for (auto i : queries) {
            ans.push_back(m[i]);
        }
        return ans;
    }