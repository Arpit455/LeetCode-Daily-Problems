vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {

        unordered_map<int, int> m1, m2;
        vector<int> ans;
        for (auto i : nums1)
            m1[i]++;
        for (auto i : nums2)
            m2[i]++;

        for (auto i : m1) {
            if (m2.find(i.first) != m2.end()) {
                for (int j = 0; j < min(i.second, m2[i.first]); j++)
                    ans.push_back(i.first);
            }
        }
        return ans;
    }