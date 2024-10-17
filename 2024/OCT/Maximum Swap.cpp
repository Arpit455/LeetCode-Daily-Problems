int maximumSwap(int num) {

        vector<int> v;
        while (num) {
            v.push_back(num % 10);
            num = num / 10;
        }
        reverse(v.begin(),v.end());
        vector<int> prefix(v.size());
        int n = prefix.size() - 1;
        prefix[n] = v[n];
        int maxprefix = prefix[n];
        int i = n - 1;
        while (i >= 0) {
            maxprefix = max(maxprefix, v[i]);
            prefix[i] = maxprefix;
            i--;
        }
        int swapnum1, swapnum2;
        bool swapped = false;
        for (int i = 0; i < n; i++) {
            if (v[i] < prefix[i + 1]) {
                swapnum1 = prefix[i + 1];
                swapnum2 = v[i];
                v[i] = prefix[i + 1];
                swapped = true;
                break;
            }
        }
        if (swapped) {
            for (int i = n; i >= 0; i--) {
                if (v[i] == swapnum1) {
                    v[i] = swapnum2;
                    break;
                }
            }
        }

        int ans = 0, power = 0;
        for (int i = n; i >= 0; i--) {
            ans+=v[i]*pow(10,power);
            power++;
            }
        return ans;
    }