int maximumGain(string s, int x, int y) {

        stack<char> st;
        int ans = 0;
        if (x > y) {
            for (auto i : s) {
                if (i == 'b' && !st.empty() && st.top() == 'a') {
                    st.pop();
                    ans += x;
                } else
                    st.push(i);
            }
            string temp = "";
            while (!st.empty()) {
                temp += st.top();
                st.pop();
            }
            reverse(temp.begin(), temp.end());
            for (auto i : temp) {
                if (i == 'a' && !st.empty() && st.top() == 'b') {
                    st.pop();
                    ans += y;
                } else
                    st.push(i);
            }

        } else {
            for (auto i : s) {
                if (i == 'a' && !st.empty() && st.top() == 'b') {
                    st.pop();
                    ans += y;
                } else
                    st.push(i);
            }
            string temp = "";
            while (!st.empty()) {
                temp += st.top();
                st.pop();
            }
            reverse(temp.begin(), temp.end());
            for (auto i : temp) {
                if (i == 'b' && !st.empty() && st.top() == 'a') {
                    st.pop();
                    ans += x;
                } else
                    st.push(i);
            }
        }
        return ans;
    }