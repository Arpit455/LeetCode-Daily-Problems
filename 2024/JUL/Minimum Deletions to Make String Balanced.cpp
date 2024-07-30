int minimumDeletions(string s) {

        if (s.size() == 1)
            return 0;

        int number_of_b = 0, number_of_a = 0;
        for (auto i : s) {
            if (i == 'a')
                number_of_a++;
            else
                number_of_b++;
        }
        int prefix_b = 0, prefix_a = 0, ans = INT_MAX;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'a')
                prefix_a++;
            int temp = (prefix_b) + (number_of_a - prefix_a);

            if (s[i] == 'b')
                prefix_b++;

            ans = min(ans, temp);
        }

        return ans;
    }