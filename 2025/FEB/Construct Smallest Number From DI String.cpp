class Solution {
public:
    void helper(int prev, int index, string &s, vector<bool> &used, string &pattern, string &smallest) {
        if (index >= pattern.size()) {
            if (smallest.empty() || s < smallest) {
                smallest = s;
            }
            return;
        }

        for (int i = 1; i <= 9; i++) {
            if (!used[i]) {
                if ((pattern[index] == 'I' && i > prev) || (pattern[index] == 'D' && i < prev)) {
                    used[i] = true;
                    s += to_string(i);
                    helper(i, index + 1, s, used, pattern, smallest);
                    used[i] = false;
                    s.pop_back();
                }
            }
        }
    }

    string smallestNumber(string pattern) {
        string smallest = "";
        vector<bool> used(10, false);

        for (int i = 1; i <= 9; i++) {
            string temp = to_string(i);
            used[i] = true;
            helper(i, 0, temp, used, pattern, smallest);
            used[i] = false;
        }

        return smallest;
    }
};
