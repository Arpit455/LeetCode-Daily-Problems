string kthDistinct(vector<string>& arr, int k) {

        unordered_map<string, int> s1;
        for (auto i : arr) {
            s1[i]++;
        }

        for (auto i : arr) {
            if (s1[i] == 1)
                k--;
            if (k == 0)
                return i;
        }
        return "";
    }