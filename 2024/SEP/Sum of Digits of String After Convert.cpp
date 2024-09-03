int getLucky(string s, int k) {

        int sum = 0, temp;
        for (auto i : s) {
            temp = 1 + (i - 'a');
            if (temp < 10)
                sum += temp;
            else {
                sum += temp % 10;
                temp /= 10;
                sum += temp % 10;
            }
        }
        int ans;
        for (int i = 1; i < k; i++) {
            ans = 0;
            while (sum) {
                ans += sum % 10;
                sum /= 10;
            }
            sum = ans;
        }
        return sum;
    }