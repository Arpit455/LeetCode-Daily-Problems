static bool comparator(pair<int, pair<int, int>> p1,
                           pair<int, pair<int, int>> p2) {
        if (p1.first == p2.first)
            return p2.second.second > p1.second.second;
        return p2.first > p1.first;
    }
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {

        vector<pair<int, pair<int, int>>> v;
        for (int i = 0; i < nums.size(); i++) {
            int p = 0, number = 0, j = nums[i];
            if (nums[i] == 0)
                number = mapping[0];
            while (nums[i]) {
                int temp = nums[i] % 10;
                number += mapping[temp] * pow(10, p);
                nums[i] = nums[i] / 10;
                p++;
            }
            pair<int, int> q = {j, i};
            v.push_back({number, q});
        }
        sort(v.begin(), v.end(), comparator);
        vector<int> ans;
        for (auto i : v) {
            ans.push_back(i.second.first);
        }
        return ans;
    }