class Solution {
public:
    int maxTotalFruits(vector<vector<int>>& fruits, int startPos, int k) {
        int n = fruits.size();
        vector<int> positions, prefixsum;

        for (int i = 0; i < n; ++i) {
            positions.push_back(fruits[i][0]);
            prefixsum.push_back(fruits[i][1] + (i > 0 ? prefixsum[i - 1] : 0));
        }

        int result = 0;

        for (int d = 0; d <= k; ++d) {
            int left = startPos - d;
            int right = startPos + (k - 2 * d);
            if (right >= left) {
                int l = lower_bound(positions.begin(), positions.end(), left) -
                        positions.begin();
                int r = upper_bound(positions.begin(), positions.end(), right) -
                        positions.begin() - 1;
                if (l <= r) {
                    int sum = prefixsum[r] - (l > 0 ? prefixsum[l - 1] : 0);
                    result = max(result, sum);
                }
            }
            int right2 = startPos + d;
            int left2 = startPos - (k - 2 * d);
            if (right2 >= left2) {
                int l = lower_bound(positions.begin(), positions.end(), left2) -
                        positions.begin();
                int r =
                    upper_bound(positions.begin(), positions.end(), right2) -
                    positions.begin() - 1;
                if (l <= r) {
                    int sum = prefixsum[r] - (l > 0 ? prefixsum[l - 1] : 0);
                    result = max(result, sum);
                }
            }
        }

        return result;
    }
}
;