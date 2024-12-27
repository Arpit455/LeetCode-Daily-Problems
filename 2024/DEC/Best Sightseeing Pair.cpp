int maxScoreSightseeingPair(vector<int>& values) {
        int n = values.size();
        int ans = INT_MIN, maxi = values[n - 1] - n + 1;
        int i = n - 2;
        while (i >= 0) {
            ans = max(ans, values[i] + i + maxi);
            maxi = max(maxi, values[i] - i);
            i--;
        }
        return ans;
    }