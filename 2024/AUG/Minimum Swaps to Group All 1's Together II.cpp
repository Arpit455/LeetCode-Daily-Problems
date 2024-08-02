int minSwaps(vector<int>& nums) {

        int number_of_one = 0, n = nums.size();
        for (auto i : nums) {
            if (i == 1)
                number_of_one++;
        }
        int l = 0, r = 0, ones = 0, maximumones = 0;
        for (int i = 0; i < 2 * n - 1; i++) {
            if (nums[r % n] == 1)
                ones++;

            if (r - l + 1 > number_of_one) {
                if (nums[l % n] == 1)
                    ones--;
                l++;
            }
            maximumones = max(maximumones, ones);
            r++;
        }
        return number_of_one - maximumones;
        return 0;
    }