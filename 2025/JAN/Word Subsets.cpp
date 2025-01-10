vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {

        vector<string> universal_strings;
        vector<int> freq(26, 0);
        for (auto i : words2) {
            vector<int> temp(26, 0);
            for (auto j : i)
                temp[j - 'a']++;

            for (int j = 0; j < 26; j++)
                freq[j] = max(freq[j], temp[j]);
        }
        for (auto i : words1) {
            vector<int> temp_freq(26, 0);
            for (auto j : i)
                temp_freq[j - 'a']++;

            bool isUniversal = true;
            for (int j = 0; j < 26; j++) {
                if (freq[j] != 0 && freq[j] > temp_freq[j]) {
                    isUniversal = false;
                    break;
                }
            }
            if (isUniversal)
                universal_strings.push_back(i);
        }
        return universal_strings;
    }